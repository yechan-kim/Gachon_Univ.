#include <stdio.h>

int main()
{
    int i, j, x;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%3d", j);
        }
        printf("\n");
    }

    return 0;
}