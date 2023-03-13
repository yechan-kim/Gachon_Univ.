#include <stdio.h>
#include <math.h>

double pow_3(int n)
{
    if (n > 0)
    {
        return pow(n, 3) + pow_3(n - 1);
    }
    return 0;
}

int main()
{
    int n, sum;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    sum = (int)pow_3(n);
    printf("%d", sum);

    return 0;
}