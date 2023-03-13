#include <stdio.h>
#include <string.h>

int main()
{
    char text;

    printf("문자를 입력하시오: ");
    scanf("%c", &text);
    printf("입력된 문자의 아스키 코드 값: %d", text);

    return 0;
}