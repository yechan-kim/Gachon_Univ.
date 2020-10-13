#include <stdio.h>

int main()
{
    int i, n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    if (n == 2)
    {
        printf("%d은 소수입니다.", n);
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("%d은 소수가 아닙니다.", n);
                break;
            }
            else
            {
                if (i == n - 1)
                    printf("%d은 소수입니다.", n);
            }
        }
    }

    return 0;
}