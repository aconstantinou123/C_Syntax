#include <stdio.h>
#include <stdint.h>
#include "functions.h"

int main(void)
{   
     /* 
    Bitmasking using AND in order to test if a number is
    odd or even. For example a test of 4 would be:
        00000100
        00000001 
        4 & 1 produces 0 so the number is even
    Testing 3:
        00000011
        00000001
        3 & 1 produces 1 so the number is odd
    Bitwise AND used to test not to set
    */
    int temp;
    int8_t num;
    printf("Please enter a number: ");
    scanf("%d", &temp);
    num = (int8_t)temp;
    if(num & 1){
        printf("Number is odd\n");
    } else {
        printf("Number is even\n");
    }
    waitForUserInput();
    return 0;
}