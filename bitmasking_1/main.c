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
    /* Bitmask OR of 136 will have
    the effect of setting the eighth and fourth
    bit. See example below:
        00000111 - 7
        10001000 - 136 
        10001111 - 143
    Bitwise OR used to set not to test
    */
    bitmask = 136;
    result = num | bitmask;
    printf("Result in decimal: %d\n", result);
    printf("Result in hexidecimal: 0x%x\n", result);
    waitForUserInput();
    return 0;
}


