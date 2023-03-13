#include <stdio.h>

#define and &&
#define or ||

int main()
{
    int credits;
    float gpa;

    printf("지금까지 획득한 학점수를 입력하시오: ");
    scanf("%d", &credits);
    printf("지금까지 획득한 학점평균를 입력하시오: ");
    scanf("%f", &gpa);

    if (credits >= 120 and gpa >= 2.0)
        printf("졸업 가능합니다.");
    else
        printf("졸업 불가능합니다.");

    return 0;
}