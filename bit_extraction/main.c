#include <stdio.h>

int main(void)
{
    int original = 0xB410;
    // 1011010000010000
    // shift section we want to the least significant bit
    // 0000000001011010
    // create mask of 11111 and use it to extract first 5 bits
    int extracted = (original >> 9) & 0x3F;
    printf("%d\n", extracted);
    return 0;
}