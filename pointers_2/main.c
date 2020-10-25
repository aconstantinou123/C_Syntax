#include <stdio.h>

void passPointer(char*);

int main(void)
{ 
    /* compiler always reserves 8 bytes (64 bits) for 
    pointer data type. Initial data type doesn't really
    matter size wise
    The pointer data type decides the behaviour of the 
    operations carried out on the pointer variable.
    So the char pointer below will yield 1 byte of data
    on a read operation whereas an int will yield 4 bytes
    and a long long int will yield 8
    */
    int someData = 0x89;
    int* address1 = &someData;
    *address1 = 0x85;

    // read from the pointer by dereferencing it
    int derefData = *address1;
    printf("%x\n", derefData);
    printf("%x\n", someData);

    char char1 = 100;
    char* pChar1 = &char1;
    printf("char1 address: %p\n", pChar1);
    printf("char1 value from pointer: %d\n", *pChar1);
    *pChar1 = 65;
    printf("char1 changed value: %d\n", char1);
    passPointer(pChar1);
    printf("char1 modified by function: %d\n", *pChar1);
}

void passPointer(char* c)
{
    *c = 23;
}