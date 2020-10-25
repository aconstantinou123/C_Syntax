#include <stdio.h>
#include "math.h"

int main()
{
    int sum_add = math_add(1, 2);
    printf("sum: %d\n", sum_add);

    int sum_sub = math_sub(20, 5);
    printf("sum: %d\n", sum_sub);

    long long int sum_mul = math_mul(200000, 500000);
    printf("sum: %lld\n", sum_mul);

    float sum_div = math_div(100, 8);
    printf("sum: %.1f\n", sum_div);

    return 0;
}