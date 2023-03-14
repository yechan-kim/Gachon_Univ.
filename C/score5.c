#include <stdio.h>
#define SIZE 5

int main()
{
    int i, score[SIZE] = {31, 63, 62, 87, 14};

    for (i = 0; i < SIZE; i++)
        printf("score[%d] = %d\n", i, score[i]);

    return 0;
}