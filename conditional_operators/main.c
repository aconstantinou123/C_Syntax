#include <stdio.h>

int main(void)
{
    int num1 = 20;
    int res1 = 1;
    int res2 = 0;
    int outcome;

    outcome = num1 > 30 ? res1 : res2;
    printf("outcome: %d\n", outcome);
    return 0;
}