#include "arraylib.h"
#include <iostream>

int main() {
    int data[] = {5, 3, 8, 1, 9, 2};
    const std::size_t n = sizeof(data) / sizeof(data[0]);
    std::cout << "Sum: " << arr_sum(data, n) << '\n';
    return 0;
}