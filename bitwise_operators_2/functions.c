#include <stdio.h>

void waitForUserInput(void)
{
    printf("Press any key to exit\n");
    while (getchar() != '\n')
    {
    }
    getchar();
}