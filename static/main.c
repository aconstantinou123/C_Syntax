#include <stdio.h>
#include "file1.c"

static void changeSystemClock(int);
/*
    using static would mean this var was only 
    accessible in this file 
 */
int privateData;

int main()
{
    privateData = 100;
    file1MyFunc1();
    printf("Main private data: %d\n", privateData);
    changeSystemClock(20);
    return 0;
}

// use static to make function private (only this file)
static void changeSystemClock(int systemClock)
{
    printf("System clock changed to: %d\n", systemClock);
}