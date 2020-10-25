#include <stdio.h>
#include <stdint.h>

void findEvenNumbers(int32_t, int32_t);

int main(void)
{
    int32_t start, end;
    printf("Enter start value: ");
    scanf("%d", &start);
    printf("Enter end value:");
    scanf("%d", &end);
    printf("Printing even numbers: \n");
    findEvenNumbers(start, end);
    return 0;
}

void findEvenNumbers(int32_t start, int32_t end)
{
    if(end < start)
    {
        printf("Start number must be less than end\n");
        return;
    }
    int32_t current = start;
    int32_t evenCount = 0;
    while (current <= end)
    {
        if(current % 2 == 0)
        {
            evenCount++;
            //4d - each output uses 4 spaces in display
            printf("%4d\t", current);
        }
        current++;
    }
    printf("\nTotal even numbers: %d\n", evenCount);
    
}