#include <stdio.h>

int main()
{
    int arr[5], i;
    int *p = arr;

    printf("5개의 정수를 입력하시오:");
    scanf("%d %d %d %d %d", p, p + 1, p + 2, p + 3, p + 4);

    printf("역순:");
    for (i = 4; i >= 0; i--)
        printf("%2d", *(p + i));
    printf("\n");

    return 0;
}