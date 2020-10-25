#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t *pAddress = (uint32_t*)0xFFF0000;
    pAddress = pAddress + 1;
    /* Address incremented by 4 as we are adding 1 
    uint32_t which is 4 bytes of data */
    printf("pointer %p\n", pAddress);
    pAddress++;
    printf("pointer %p\n", pAddress);
    int a, b, c;
    a = 20;
    b = 30;
    c = a <= b;
    printf("c is equal to: %d", c);
    return 0;
}