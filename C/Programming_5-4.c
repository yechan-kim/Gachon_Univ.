#include <stdio.h>

int main()
{
    int x, y, z;

    printf("삼각형의 세변을 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);
    int max = (x > y ? x : y) > z ? (x > y ? x : y) : z;
    int restSum = max == z ? x + y : (max == y ? x + z : y + z);
    if (restSum > max)
    {
        if (x == y && y == z)
            printf("정삼각형");
        else if (x == y || y == z || x == z)
            printf("이등변 삼각형");
        else
            printf("일반 삼각형");
    }
    else
        printf("정의가 불가능한 삼각형 입니다.");

    return 0;
}