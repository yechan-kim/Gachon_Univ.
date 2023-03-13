#include <stdio.h>

int main()
{
    int i, j, x;
    for (i = 0; i < 10; i++)
    {
        printf("데이터를 입력하시오: ");
        scanf("%d", &x);
        for (j = 0; j < x; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}