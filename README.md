# arraylib

Кроссплатформенная динамическая библиотека для работы с массивом int.

## Функции

- arr_sum — сумма элементов
- arr_max / arr_min — максимум / минимум
- arr_average — среднее арифметическое
- arr_count_positive / arr_count_negative / arr_count_zero — счётчики
- arr_product — произведение
- arr_median — медиана (не меняет исходный массив)

## Сборка

    cmake -S . -B build
    cmake --build build -j

## Тесты

    cd build
    ctest --output-on-failure

## Пример (вариант 6)

    ./build/variant_06