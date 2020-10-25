#include <stdio.h>

int main()
{
    double number = 45.78976834578;
    printf("Number: %.2lf\n", number);
    printf("Number: %.2e\n", number);

    double chargeE = 1.60217662e-19;
    printf("Number: %.28lf\n", chargeE);
    printf("Number: %.8e\n", chargeE);
    return 0;
}