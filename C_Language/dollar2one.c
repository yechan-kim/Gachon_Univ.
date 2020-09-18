#include <stdio.h>

int main(void)
{
    int usd=0, krw=0;

    printf("환전하실 달러의 금액을 입력해주새요.: ");
    scanf("%d", &usd);

    krw = 1200 * usd;

    printf("%d달러가 %d원으로 환전되었습니다.\n", usd, krw);
    return 0;
}