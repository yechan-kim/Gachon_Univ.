#include <stdio.h>
#define SIZE 5

int main()
{
    int i, score[SIZE];

    for (i = 0; i < SIZE; i++)
        score[i] = (i + 1) * 10;
    for (i = 0; i < SIZE; i++)
        printf("score[%d] = %d\n", i, score[i]);

    return 0;
}