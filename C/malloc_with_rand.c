#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000

int main()
{
    int i, *p, max = 0;

    p = (int *)malloc(SIZE * sizeof(int));
    if (p == NULL)
    {
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }

    for (i = 0; i < SIZE; i++)
        p[i] = rand();

    for (i = 0; i < SIZE; i++)
    {
        if (p[i] > max)
            max = p[i];
    }

    printf("최댓값: %d", max);

    free(p);

    return 0;
}