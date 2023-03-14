#include <stdio.h>

void plus(int a, int b);
void minus(int a, int b);
void multiple(int a, int b);
void division(int a, int b);

int cntp = 0, cntm = 0, cnt_m = 0, cnt_d = 0;

int main()
{
    int a, b;
    char s;

    while (1)
    {
        printf("연산을 입력하시오(종료는 Ctrl + C): ");
        scanf("%d %c %d", &a, &s, &b);

        if (s == '+')
            plus(a, b);
        else if (s == '-')
            minus(a, b);
        else if (s == '*')
            multiple(a, b);
        else if (s == '/')
            division(a, b);
    }

    return 0;
}

void plus(int a, int b)
{
    cntp++;
    printf("덧셈은 총 %d번 호출되었습니다.\n", cntp);
    printf("연산결과: %d + %d = %d\n", a, b, a + b);

    return;
}

void minus(int a, int b)
{
    cntm++;
    printf("뺄셈은 총 %d번 호출되었습니다.\n", cntm);
    printf("연산결과: %d - %d = %d\n", a, b, a - b);

    return;
}

void multiple(int a, int b)
{
    cnt_m++;
    printf("곱셈은 총 %d번 호출되었습니다.\n", cnt_m);
    printf("연산결과: %d * %d = %d\n", a, b, a * b);

    return;
}

void division(int a, int b)
{
    cnt_d++;
    printf("나눗셈은 총 %d번 호출되었습니다.\n", cnt_d);
    printf("연산결과: %d / %d = %lf\n", a, b, ((double)a / b));

    return;
}