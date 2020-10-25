#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t i = 1;
    while (i <= 10)
    {
        printf("%d\n", i++);
    }
    return 0;
}