#include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void)
{
    int input, minute, second;

    printf("초단위의 시간을 입력하에요.: ");
    scanf("%d", &input);

    minute = input / SEC_PER_MINUTE;
    second = input % SEC_PER_MINUTE;

    printf("%d초는 %d분 %d초 입니다.\n", input, minute, second);
    return 0;
}