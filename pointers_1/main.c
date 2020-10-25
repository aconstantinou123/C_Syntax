#include <stdio.h>

int main()
{
    char a1 = 'A';
    char a2 = 'p';
    char a3 = 'p';
    char a4 = 'l';
    char a5 = 'e';
    char a6 = ':';
    char a7 = ')';

    printf("Size of pointer %d\n", sizeof(&a1));
    // casting pointer data type to unsigned long int
    unsigned long long int addressOfa1= (unsigned long long int)&a1;

    printf("Address a1: %llx\n", addressOfa1);
    // printf("Address a2: %p\n", &a2);
    // printf("Address a3: %p\n", &a3);
    // printf("Address a4: %p\n", &a4);
    // printf("Address a5: %p\n", &a5);
    // printf("Address a6: %p\n", &a6);
    // printf("Address a7: %p\n", &a7);
    return 0;
}