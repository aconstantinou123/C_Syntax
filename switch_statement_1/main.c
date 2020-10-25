#include<stdio.h>
#include<string.h>

void switchCase(int, char*, int);

int main(void)
{
    char buffer[32];
    switchCase(1, buffer, sizeof(buffer));
    printf("%s", buffer);
    switchCase(10, buffer, sizeof(buffer));
    printf("%s", buffer);
}

void switchCase(int num, char* buffer, int buffersize)
{
    switch (num)
    {
    case 1:
        strncpy(buffer, "you chose 1\n", buffersize-1);
        break;
    
    default:
        strncpy(buffer, "you didn\'t choose 1\n", buffersize-1);
        break;
    }
}