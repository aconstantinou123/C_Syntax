#include <stdio.h>
#include <stdint.h>

int main(void)
{   
    // right shift operator >>
    uint8_t a = 111;
    // 01101111
    uint8_t b = a >> 4;
    // bit shifted 4 places to the right
    // right shift always decreases value
    // 00000110 - 6
    printf("b: %d\n", b);
    // left shift operator
    uint8_t c = a << 4;
    // bit shifted 4 places to the left
    // left shift always increases value
    // 11110000 - 240
    printf("c: %d\n", c);
    return 0;
}