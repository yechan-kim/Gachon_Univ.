#include <stdio.h>
#include <math.h>

void quad_eqn(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("2차 방정식의 계수를 입력하시오: \n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    quad_eqn(a, b, c);

    return 0;
}

void quad_eqn(int a, int b, int c)
{
    if ((pow(b, 2) - 4 * a * c) >= 0)
    {
        printf("%lf\n", (-1 * b + sqrt((pow(b, 2) - 4 * a * c))) / 2 * a);
        printf("%lf\n", (-1 * b - sqrt((pow(b, 2) - 4 * a * c))) / 2 * a);
    }
    else
        printf("입력한 2차 방정식은 근이 없습니다.");

    return;
}