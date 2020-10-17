#include <stdio.h>

int ipower(int n, int k);

int main()
{

    int n, k;

    printf("정수 n 입력: ");
    scanf("%d", &n);
    printf("정수 k 입력: ");
    scanf("%d", &k);

    ipower(n, k);

    return 0;
}

int ipower(int n, int k)
{
    int i, num = 1;

    if (k == 0)
        printf("%d", 1);
    else
    {
        printf("%d\n", 1);

        for (i = 1; i <= k; i++)
        {
            num *= n;
            printf("%d\n", num);
        }
    }

    return 0;
}