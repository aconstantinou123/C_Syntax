#include <stdio.h>
#include <stdint.h>

/* Placing a const in the global scope makes it completely
 unchangeable as it is placed in FLASH memory which is write
 protected */
uint8_t const globalData1 = 250;

int main(void)
{
    /* const makes number read only. Can not reassign
    using variable name */
    uint8_t const data1 = 250;
    printf("%d\n", data1);
    // Creating a pointer to a const allows reassignment
    uint8_t *pData1 = (uint8_t*)&data1;
    *pData1 = 200;
    printf("%d\n", data1);
    uint8_t data2 = 100;
    /* a const pointer with this syntax allows pointer value to be changed but data being pointed to is read only */
    uint8_t const *pData2 = &data2;
    /* a pointer with this syntax can not alter what it is 
    pointed at however the data being pointed at can be
    altered */
    uint8_t data3 = 64;
    uint8_t *const pData3 = &data3;
    /* the syntax below allows for constant data and a
    constant pointer */
    uint8_t data4 = 128;
    uint8_t const *const pData4 = &data4;
    return 0;
}