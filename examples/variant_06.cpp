#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int stock[] = {
        24, 8, 0, 17, 5,
        31, 12, 0, 7, 19
    };
    const std::size_t n = sizeof(stock) / sizeof(stock[0]);

    // Позиции, требующие пополнения (остаток < 10) — считаем циклом.
    int need_restock = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (stock[i] < 10) ++need_restock;
    }

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Остатки на складе:\n";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << "  позиция " << i + 1 << ": " << stock[i] << '\n';
    }
    std::cout << '\n';

    std::cout << "Количество позиций: "             << n                        << '\n';
    std::cout << "Общее количество единиц товара: " << arr_sum(stock, n)        << '\n';
    std::cout << "Минимальный остаток: "            << arr_min(stock, n)        << '\n';
    std::cout << "Максимальный остаток: "           << arr_max(stock, n)        << '\n';
    std::cout << "Позиций с нулевым остатком: "     << arr_count_zero(stock, n) << '\n';
    std::cout << "Требуют пополнения (< 10): "      << need_restock             << '\n';

    return 0;
}