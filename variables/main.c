#include <stdio.h>

// function prototype
void myFunc(int);

int main()
{
    int myScore;
    myScore = 900;
    myFunc(myScore);
    return 0;
}

// function definition
void myFunc(int age)
{
    printf("Hi, I\'m %d years old!\n", age);
}