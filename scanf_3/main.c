#include <stdio.h>

int main(void)
{
    double givenCharge, numberOfElectrons;
    double electronCharge = -1.60217662e-19;
    printf("Enter given charge!\n");
    scanf("%lf", &givenCharge);
    numberOfElectrons = (givenCharge / electronCharge) * -1;
    printf("Result: %le\n", numberOfElectrons);
    printf("Result: %lf\n", numberOfElectrons);
    while (getchar() != '\n')
    {

    }
    getchar();
    return 0;
}