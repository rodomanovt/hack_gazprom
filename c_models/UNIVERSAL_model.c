// UNIVERSAL ML MODEL FOR ALL SENSORS
// OUTPUT: 1.0 = Good (Normal), 0.0 = Bad (Noise/Anomaly)

#include <string.h>
void score(double * input, double * output) {
    double var0[2];
    if (input[0] <= 0.010500133968889713) {
        if (input[1] <= 0.01050085574388504) {
            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
        } else {
            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    memcpy(output, var0, 2 * sizeof(double));
}
