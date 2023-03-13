#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main()
{
    int i, *p, sum = 0;

    p = (int *)malloc(SIZE * sizeof(int));
    if (p == NULL)
    {
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }

    for (i = 0; i < SIZE; i++)
    {
        p[i] = rand() % 100;
        sum += p[i];
    }

    printf("평균: %f", (float)(sum / SIZE));

    free(p);

    return 0;
}