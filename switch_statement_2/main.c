#include <stdio.h>

int main(void)
{   
    int value = 2;
    switch (value)
    {
    case 1:
        printf("Case 1 - Value is : %d\n", value);
        break;
    case 2:
        printf("Case 2 - Value is : %d\n", value);
        break;
    case 3:
        printf("Case 3 - Value is : %d\n", value);
        break;
    default:
        printf("Not valid case\n");
        break;
    }
    return 0;
}