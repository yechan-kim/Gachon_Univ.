#include <stdio.h>
#define SIZE 26

int main()
{
    int i;
    char code[SIZE];

    for (i = 0; i < SIZE; i++)
        code[i] = 'a' + i;
    for (i = 0; i < SIZE; i++)
        printf("%c ", code[i]);
    printf("\n");

    return 0;
}