#include <stdio.h>

int main()
{
    int i, num, a, b, tmp = 0;

    printf("몇번째 항까지 구할까요? ");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        if (i == 0)
        {
            a = 0;
            printf("%d, ", a);
        }
        else if (i == 1)
        {
            b = 1;
            printf("%d, ", b);
        }
        else
        {
            tmp = b;
            b += a;
            a = tmp;
            printf("%d, ", b);
        }
    }

    return 0;
}