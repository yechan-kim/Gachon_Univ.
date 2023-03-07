#include <stdio.h>

int main(void)
{
    int s[2][4], i, j, value = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            s[i][j] = value++;
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d", s[i][j]);
        printf("\n");
    }
    return 0;
}