#include <stdio.h>

int main(void)
{
    char a = 40;
    char b = 30;
    int resultAnd, resultOr, resultNot, resultXor;
    // Bitwise AND
    // 101000 40
    // 011110 30
    // 001000 8
    resultAnd = a & b;
    printf("%d\n", resultAnd);
    // Bitwise OR
    // 101000 40
    // 011110 30
    // 111110 62
    resultOr = a | b;
    printf("%d\n", resultOr);
    // Bitwise NOT
    // 00101000 40
    // 11010111 -41 (Two's Complement)
    resultNot = ~a;
    printf("%d\n", resultNot);
    // Bitwise XOR
    // 101000 40
    // 011110 30
    // 110110 62
    resultXor = a ^ b;
    printf("%d\n", resultXor);
    return 0;
}

