#include <stdio.h>
int main()
{
    int a[5], i, max = 0, min = 0;
    for (i = 0; i < 5; i++)
    {
        printf("정수를 입력하시오: ");
        scanf("%d", &a[i]);
    }
    max = a[1];
    min = a[1];
    for (i = 0; i < 5; i++)
    {
        if (max < a[i])
            max = a[i];
        else if (min > a[i])
            min = a[i];
    }
    printf("최대값=%d 최소값=%d", max, min);
    return 0;
}