#include <stdio.h>

struct complex_num
{
    float num1;
    float num2;
};

int main()
{
    struct complex_num cmp_num[2];

    printf("첫번째 복소수를 입력하시오(a, b): ");
    scanf("%f %f", &cmp_num[0].num1, &cmp_num[0].num2);
    printf("두번째 복소수를 입력하시오(c, d): ");
    scanf("%f %f", &cmp_num[1].num1, &cmp_num[1].num2);

    printf("%.1f + %.1fi입니다.", cmp_num[0].num1 + cmp_num[1].num1, cmp_num[0].num2 + cmp_num[1].num2);

    return 0;
}