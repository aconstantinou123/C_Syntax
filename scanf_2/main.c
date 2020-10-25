#include <stdio.h>

int main(void)
{
    char char1, char2, char3, char4, char5, char6;
    printf("Enter 6 characters\n");
    fflush(stdout);
    scanf("%c %c %c %c %c %c", 
        &char1, &char2, &char3, &char4,
        &char5, &char6);
    // char1 = getchar();
    // char2 = getchar();
    // char3 = getchar();
    // char4 = getchar();
    // char5 = getchar();
    // char6 = getchar();
    printf("Ascii output: %d, %d, %d, %d, %d, %d\n", 
        char1, char2, char3, char4, char5, char6);
    printf("Press any key to exit");
    while (getchar() != '\n')
    {

    }
    getchar();
    return 0;
}