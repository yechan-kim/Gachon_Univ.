#include <stdio.h>

int main()
{
    int i, j, gugu[10][10];

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
            gugu[i][j] = i * j;
    }

    printf("알고싶은 구구단을 입력하시오(예: 9 3): ");
    scanf("%d %d", &i, &j);
    printf("%dX%d=%d", i, j, gugu[i][j]);

    return 0;
}