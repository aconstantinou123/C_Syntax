#include <stdio.h>

void loop(char**, int);

int main(void)
{
    char* arr[4];
    arr[0] = "foo";
    arr[1] = "bar";
    arr[2] = "baz";
    arr[3] = "qux";
    int size = sizeof arr / sizeof arr[0];
    loop(arr, size);
    return 0;
}

void loop(char **arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("arr item: %s\n", arr[i]);
    }
}