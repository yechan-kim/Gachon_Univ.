#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;

    printf("계수 a를 입력하시오: ");
    scanf("%d", &a);
    printf("계수 b를 입력하시오: ");
    scanf("%d", &b);
    printf("계수 c를 입력하시오: ");
    scanf("%d", &c);
    if (a == 0)
        printf("위의 이차 방적식의 실근은 %d입니다.", -c / b);
    else if (b * b - 4 * a * c < 0)
        printf("위의 이차 방적식의 실근은 존재하지 않습니다.");
    else
        printf("위의 이차 방적식의 실근은 %.2lf과 %.2lf입니다.", (-b + sqrt(b * b - 4 * a * c)) / (2 * a), (-b - sqrt(b * b - 4 * a * c)) / (2 * a));

    return 0;
}