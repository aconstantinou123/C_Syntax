#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("Hello World!\n");
    printf("Char length %d\n", CHAR_BIT);
    printf("Char max %d\n", CHAR_MAX);
    printf("Char min %d\n", CHAR_MIN);
    printf("UChar max %d\n", UCHAR_MAX);
    printf("Long max %ld\n", LONG_MAX);
    printf("Long min %ld\n", LONG_MIN);
    return 0;
}