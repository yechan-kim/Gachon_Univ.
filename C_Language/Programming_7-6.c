#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int main()
{
    int i, a, max = 0, cnt[SIZE] = {0};

    for (i = 0; i < 60000; i++)
        cnt[rand() % 6]++;

    for (i = 0; i < SIZE; i++)
        printf("%d: %d\n", i + 1, cnt[i]);

    return 0;
}