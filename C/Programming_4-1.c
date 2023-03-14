#include <stdio.h>

int main()
{
    int x, y;
    
    printf("첫 번째 정수를 입력하시오: ");
    scanf("%d", &x);
    printf("두 번째 정수를 입력하시오: ");
    scanf("%d", &y);
    printf("몫은 %d이고 나머지는 %d입니다.", x / y, x % y);

    return 0;
}