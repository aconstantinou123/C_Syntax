#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t age;
    int temp_age;
    printf("Please enter your age: ");
    fflush(stdout);
    scanf("%d", &temp_age);
    age = (uint8_t)temp_age;
    if(age >= 18) {
        printf("You can vote\n");
    } else {
        printf("You can\'t vote\n");
    }
    fflush(stdout);
    printf("Press any key to continue\n");
    while (getchar() != '\n')
    {
    }
    getchar();
    return 0;
}