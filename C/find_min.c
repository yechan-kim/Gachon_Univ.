#include <stdio.h>
#define SIZE 10

int main()
{
    int i, min, price[SIZE] = {12, 3, 19, 6, 18, 8, 12, 4, 1, 19};

    min = price[0];
    printf("[ ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", price[i]);
        if (min > price[i])
            min = price[i];
    }
    printf("]\n");

    printf("최소값은 %d입니다.",min);

    return 0;
}