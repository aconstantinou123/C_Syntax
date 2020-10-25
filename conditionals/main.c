#include <stdio.h>

void conditionals(int);

int main(void)
{
    printf("Hello World!\n");
    conditionals(3);
    conditionals(7);
    conditionals(5);
}

void conditionals(int i){
    if(i > 5)
        printf("%d is greater than 5\n", i);
    else if (i == 5)
        printf("Your number is equal to 5\n");
    else
        printf("%d is less than 5\n", i);
}