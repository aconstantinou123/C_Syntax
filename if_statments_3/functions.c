#include <stdio.h>
#include <stdint.h>

void waitForUserInput(void)
{
    printf("Press any key to exit\n");
    while (getchar() != '\n')
    {
    }
    getchar();
}

float calculateTaxRate(uint64_t income)
{
    float taxRate;
    if(income > 82500) {
        taxRate = 0.32;
    } else if (income >= 38701) {
        taxRate = 0.22;
    } else if (income >= 9525) {
        taxRate = 0.12;
    } else {
        taxRate = 0;
    }
    return taxRate;
}

uint64_t calculateExtraTax(uint64_t income)
{
    uint64_t extraTax = 0;
    if(income >= 82500) {
        extraTax = 1000;
    }
    return extraTax;
}

int isValidIncome(int isValid, double tempIncome)
{
    if(!isValid){
        printf("Invald amount\n");
        waitForUserInput();
        return 0;
    }
    if(tempIncome <= 0) {
        printf("Amount must be greater than 0\n");
        waitForUserInput();
        return 0;
    }
    return 1;
}