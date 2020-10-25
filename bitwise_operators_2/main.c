#include <stdio.h>
#include "functions.h"

int main(void)
{
    char operator;
    int num1, num2, result;
    printf("Please enter the bitwise operator: ");
    int isValid3 = scanf(" %c", &operator);
    if (!isValid3){
        printf("Invalid Character\n");
        waitForUserInput();
        return 0;
    }
    printf("Please enter the 1st number: ");
    int isValid1 = scanf("%d", &num1);
    if (!isValid1){
        printf("Invalid Number\n");
        waitForUserInput();
        return 0;
    }
    if(operator != '~') {
        printf("Please enter the 2nd number: ");
        int isValid2 = scanf("%d", &num2);
        if (!isValid2){
            printf("Invalid Number\n");
            waitForUserInput();
            return 0;
        }
    }
    switch (operator)
    {
    case'&':
        result = num1 & num2;
        break;
    case'|':
        result = num1 | num2;
        break;
    case'^':
        result = num1 ^ num2;
        break;
    case'~':
        result = ~num1;
        break;
    default:
        result ='?';
        break;
    }
    if(result == '?'){
        printf("Invalid Operator\n");
        waitForUserInput();
        return 0;
    }
    printf("Result of %c operation: %d\n", operator, result);
    waitForUserInput();
    return 0;
}