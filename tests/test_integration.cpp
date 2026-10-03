#include "arraylib.h"
#include <cassert>
#include <cmath>
#include <iostream>

static bool close(double a, double b, double eps = 1e-9) {
    return std::fabs(a - b) < eps;
}

int main() {
    int data[] = {7, 3, 9, 1, 5, 8, 2, 6, 4};
    const std::size_t n = sizeof(data) / sizeof(data[0]);

    assert(arr_sum(data, n) == 45);
    assert(arr_max(data, n) == 9);

    double avg = arr_average(data, n);
    assert(avg >= static_cast<double>(arr_min(data, n)));
    assert(avg <= static_cast<double>(arr_max(data, n)));

    int sorted[] = {1, 2, 3, 4, 5, 6, 7};
    assert(close(arr_median(sorted, 7), 4.0));

    int mix[] = {-1, 0, 2, -3, 0, 4};
    const std::size_t m = sizeof(mix) / sizeof(mix[0]);
    assert(arr_count_positive(mix, m)
         + arr_count_negative(mix, m)
         + arr_count_zero(mix, m) == static_cast<int>(m));

    std::cout << "[integration] All tests passed\n";
    return 0;
}