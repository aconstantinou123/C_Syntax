#include <stdio.h>
#include <stdint.h>

long long int g_data = 0xFFFEABCD11112345;

int main(void)
{
    int* pAddress = (int*)&g_data;
    printf("Value of pAddress: %p\n", pAddress);
    printf("Value at address %p is %x\n", pAddress, *pAddress);

    pAddress = pAddress + 1;
    printf("Value of pAddress: %p\n", pAddress);
    printf("Value at address %p is %x\n", pAddress, *pAddress);

    uint8_t myData = 20;
    uint8_t* pMyData = &myData;
    while (myData < 25)
    {
        printf("My data: %d\n", myData);
        (*pMyData)++;
    }
    uint32_t value = (uint32_t)0x11223344;
    uint8_t* pValue = (uint8_t*)&value;
    printf("value: %d\n", value);
    printf("address: %x\n", *pValue);
    pValue++;
    printf("address: %x\n", *pValue);
    uint8_t max = 255;
    printf("max: %x\n", max);
    max++;
    printf("max: %x\n", max);
    return 0;
}