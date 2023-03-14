#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int i, a, max = 0, cnt[SIZE]={0};

    for (i = 0; i < 100; i++)
        cnt[rand() % 10]++;

    for (i = 0; i < SIZE; i++)
    {
        if (max < cnt[i])
        {
            max = cnt[i];
            a = i;
        }
    }

    printf("가장 많이 생성된 수 = %d", a);

    return 0;
}