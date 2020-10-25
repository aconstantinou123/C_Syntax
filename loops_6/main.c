#include <stdio.h>
#include <stdint.h>

void printPyramid(int32_t);

int main(void)
{
    int32_t height;
    printf("Enter height: ");
    scanf("%d", &height);
    printPyramid(height);
    return 0;
}

void printPyramid(int32_t height)
{
    if(height <= 0)
    {
        printf("Height must be greater than 0\n");
        return;
    }
    for(int32_t i = 1; i <= height; i++)
    {
        for(int32_t j = i; j >= 1; j--)
        {
            printf("%4d\t", j);
        }
        printf("\n");
    }
}