#include <stdio.h>
#include <stdint.h>
#include "functions.h"

int main(void)
{
    int temp;
    int16_t num, bitmask, result;
    printf("Please enter a number: ");
    scanf("%d", &temp);
    num = (int16_t)temp;
    /* Bitmask AND of 199 will have
    the effect of clearing bits 4, 5 and 6. 
    See example below:
        11010110 - 214
        10001111 - 143 
        10000110 - 134
    Bitwise AND is used to clear
    */
    bitmask = 143;
    result = num & bitmask;
    printf("Result in decimal: %d\n", result);
    printf("Result in hexidecimal: 0x%x\n", result);
    waitForUserInput();
    return 0;
}


