#include <stdio.h>
#define SIZE 5

int main()
{
    int i, j, a, tmp, select, list[SIZE] = {16, 7, 9, 1, 3};

    for (i = 0; i < SIZE - 1; i++)
    {
        select = list[i];
        for (j = i; j < SIZE; j++)
        {
            if (list[j] < select)
            {
                select = list[j];
                a = j;
            }
        }
        tmp = list[i];
        list[i] = select;
        list[a] = tmp;
    }

    for (i = 0; i < SIZE; i++)
        printf("%d ", list[i]);

    return 0;
}