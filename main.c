#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <sys/stat.h>
#include <dirent.h>

#include "model.c"

#define WINDOW_SIZE 15
#define MAX_LINE_LENGTH 8192
#define MAX_SENSORS 100

extern void score(double * input, double * output);

typedef struct {
    double window[WINDOW_SIZE];
    int index;
    int count;
    double prev_value;
} SensorState;

void init_sensor_state(SensorState* state) {
    state->index = 0;
    state->count = 0;
    state->prev_value = 0.0;
    memset(state->window, 0, sizeof(state->window));
}

void insertion_sort(double* arr, int n) {
    for (int i = 1; i < n; i++) {
        double key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int process_signal(SensorState* state, double current_value) {
    state->window[state->index] = current_value;
    state->index = (state->index + 1) % WINDOW_SIZE;
    if (state->count < WINDOW_SIZE) state->count++;

    double diff = 0.0;
    if (state->count > 1) diff = fabs(current_value - state->prev_value);
    state->prev_value = current_value;

    double temp_window[WINDOW_SIZE];
    for (int i = 0; i < state->count; i++) temp_window[i] = state->window[i];
    insertion_sort(temp_window, state->count);

    double median = 0.0;
    if (state->count % 2 == 0) median = (temp_window[state->count/2-1] + temp_window[state->count/2]) / 2.0;
    else median = temp_window[state->count/2];

    double mean = 0.0;
    for (int i = 0; i < state->count; i++) mean += state->window[i];
    mean /= state->count;

    double variance = 0.0;
    for (int i = 0; i < state->count; i++) variance += pow(state->window[i] - mean, 2);
    
    double std = 0.0;
    if (state->count > 1) std = sqrt(variance / (state->count - 1));

    double base_level = fabs(median) + 0.1;
    double rel_diff = diff / base_level;
    double rel_std = std / base_level;

    double model_input[2] = {rel_diff, rel_std};
    double model_output[2] = {0.0, 0.0};
    score(model_input, model_output);

    return (model_output[1] > 0.5) ? 1 : 0;
}

int main() {
    const char* input_dir = "input_data";
    char input_filename[512] = "";
    
    DIR *d = opendir(input_dir);
    if (!d) {
        printf("ОШИБКА: Папка '%s' не найдена\n", input_dir);
        return 1;
    }

    struct dirent *entry;
    int file_found = 0;
    while ((entry = readdir(d)) != NULL) {
        if (entry->d_name[0] == '.') continue;
        snprintf(input_filename, sizeof(input_filename), "%s/%s", input_dir, entry->d_name);
        file_found = 1;
        break; 
    }
    closedir(d);

    if (!file_found) {
        printf("ОШИБКА: В папке '%s' нет файлов\n", input_dir);
        return 1;
    }

    FILE *fin = fopen(input_filename, "r");
    if (!fin) {
        printf("ОШИБКА: Не удалось открыть файл %s\n", input_filename);
        return 1;
    }

    char line[MAX_LINE_LENGTH];
    if (!fgets(line, sizeof(line), fin)) {
        printf("ОШИБКА: Файл пуст.\n");
        fclose(fin);
        return 1;
    }
    
    line[strcspn(line, "\r\n")] = '\0';
    char* header = line;
    if ((unsigned char)header[0] == 0xEF && (unsigned char)header[1] == 0xBB && (unsigned char)header[2] == 0xBF) {
        header += 3;
    }

    char* column_names[MAX_SENSORS + 1];
    int total_columns = 0;
    char* p = header;
    column_names[total_columns++] = p;
    while (*p) {
        if (*p == ';') {
            *p = '\0';
            column_names[total_columns++] = p + 1;
        }
        p++;
    }

    int num_sensors = total_columns - 1;
    printf("Найдено датчиков: %d. Обработка файла: %s\n", num_sensors, input_filename);

    SensorState sensors[MAX_SENSORS];
    FILE* out_files[MAX_SENSORS];

    mkdir("inference_reports", 0777);

    for (int i = 0; i < num_sensors; i++) {
        init_sensor_state(&sensors[i]);
        
        char fname[128];
        sprintf(fname, "inference_reports/%03d_report.csv", i + 1);
        
        out_files[i] = fopen(fname, "w");
        if (!out_files[i]) {
            printf("КРИТИЧЕСКАЯ ОШИБКА: Не удалось создать файл %s\n", fname);
            return 1;
        }
        
        fprintf(out_files[i], "%s;%s;0 - Bad, 1 - Good\n", column_names[0], column_names[i + 1]);
    }

    int row_count = 0;
    char* tokens[MAX_SENSORS + 1];
    while (fgets(line, sizeof(line), fin)) {
        line[strcspn(line, "\r\n")] = '\0';
        if (strlen(line) == 0) continue;

        int current_col = 0;
        char* ptr = line;
        tokens[current_col++] = ptr;
        while (*ptr && current_col < total_columns) {
            if (*ptr == ';') {
                *ptr = '\0';
                tokens[current_col++] = ptr + 1;
            }
            ptr++;
        }

        if (current_col < total_columns) continue;

        for (int i = 0; i < num_sensors; i++) {
            double val = atof(tokens[i + 1]);
            int prediction = process_signal(&sensors[i], val);
            fprintf(out_files[i], "%s;%s;%d\n", tokens[0], tokens[i + 1], prediction);
        }
        row_count++;
        if (row_count % 1000 == 0) printf("Обработано строк: %d...\r", row_count);
    }

    fclose(fin);
    for (int i = 0; i < num_sensors; i++) fclose(out_files[i]);

    printf("\nГотово! Всего строк: %d. Отчеты в папке 'inference_reports'.\n", row_count);

    return 0;
}
