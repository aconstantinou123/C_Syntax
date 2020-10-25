#include <stdio.h>

int main()
{
    double first, second, third, average;
    printf("Enter 3 number: \n");
    fflush(stdout);
    scanf("%lf %lf %lf", &first, &second, &third);
    average = (first + second + third) / 3;
    printf("Average: %lf\n", average);
    printf("Press any key to exit");
    while(getchar() != '\n')
    {

    }
    getchar();
    return 0;
}