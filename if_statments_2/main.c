#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    float num1, num2;
    printf("Please enter 2 numbers\n");

    /* Alt method - cant deal with negative numbs
    char temp1[100];
    char temp2[100];
    scanf("%s %s", temp1, temp2);
    if(isdigit(*temp1) && isdigit(*temp2)){
        num1 = atof(temp1);
        num2 = atof(temp2);
        Code to do num checking...    
    } */
    printf("Enter first number: ");
    int isFloat1 = scanf("%f", &num1);
    printf("Enter second number: ");
    int isFloat2 = scanf("%f", &num2);
    if(isFloat1 && isFloat2){
        if(num1 > num2) {
            printf("%.2f is the biggest!\n", num1);
        } else if (num2 > num1) {
            printf("%.2f is the biggest!\n", num2);
        } else {
            printf("Both numbers are equal\n");
        }
    }
    else {
        printf("Not valid numbers\n");
    }
    printf("Press any key to exit\n");
    while (getchar() != '\n')
    {
    }
    getchar();
    return 0;
}