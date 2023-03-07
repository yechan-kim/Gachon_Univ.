#include <stdio.h>

int main()
{
    float x, y;

    printf("중간고사 점수를 입력하시오: ");
    scanf("%f", &x);
    printf("중간고사 점수를 입력하시오: ");
    scanf("%f", &y);
    printf("당신의 학점은 ");
    if ((x + y) / 2.0 >= 90)
        printf("A");
    else if ((x + y) / 2.0 >= 80)
        printf("B");
    else if ((x + y) / 2.0 >= 70)
        printf("C");
    else if ((x + y) / 2.0 >= 60)
        printf("D");
    else
        printf("F");
    printf("학점 입니다.");

    return 0;
}