#!/bin/bash

REPO_RAW_URL="https://raw.githubusercontent.com/rodomanovt/hack_gazprom/main"
INSTALL_DIR="diagnostic_module"
BINARY_NAME="diagnostic_module"

echo "--- Начало установки в папку $INSTALL_DIR ---"

mkdir -p "$INSTALL_DIR/input_data"
cd "$INSTALL_DIR" || exit

echo "Скачивание исполняемого файла..."
wget -q --show-progress "$REPO_RAW_URL/$BINARY_NAME" -O "$BINARY_NAME"

if [ $? -ne 0 ]; then
    echo "Ошибка: Не удалось скачать файл $BINARY_NAME. Проверьте, что он лежит в корне репозитория."
    exit 1
fi

chmod +x "$BINARY_NAME"

printf "Загрузить тестовый файл 1.csv? [y/n]: "
read -r choice
case "$choice" in 
  y|Y ) 
    echo "Загрузка тестового файла в input_data/..."
    wget -q --show-progress "$REPO_RAW_URL/input_data/1.csv" -O "input_data/1.csv"
    if [ $? -eq 0 ]; then
        echo "Файл успешно сохранен."
    else
        echo "Ошибка при загрузке тестового файла."
    fi
    ;;
  * ) 
    echo "Загрузка файла пропущена."
    ;;
esac

echo "--- Установка завершена ---"