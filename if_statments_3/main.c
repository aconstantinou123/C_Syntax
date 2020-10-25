#include <stdio.h>
#include <stdint.h>

#include "functions.h"

void waitForUserInput();

int main(void)
{
    uint64_t income, tax;
    double tempIncome; 
    float taxRate;
    uint64_t extraTax = 0;
    printf("Tax Calculation Program\n");
    printf("Please enter the amount you earn: ");
    int scanResult = scanf("%lf", &tempIncome);
    if(!isValidIncome(scanResult, tempIncome)) {
        return 0;
    }
    income = (uint64_t)tempIncome;
    printf("Calculating tax...\n");
    taxRate = calculateTaxRate(income);
    extraTax = calculateExtraTax(income);
    tax = (income * taxRate) + extraTax;
    printf("Your income %li\n", income);
    printf("You will pay %d%% tax\n", (int)(taxRate * 100));
    printf("Your tax will be $%li\n", tax);
    waitForUserInput();
    return 0;
}