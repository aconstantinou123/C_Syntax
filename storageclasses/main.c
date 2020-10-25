#include <stdio.h>

void myFunc(void);

int main()
{
    myFunc();
    myFunc();
    myFunc();
    myFunc();
    return 0;
}

void myFunc(void)
{
    // Creates a global var that is private to this func (only can be used
    // by this func)
    static int count = 0;
    count += 1;
    printf("This function executed %d times\n", count);
}