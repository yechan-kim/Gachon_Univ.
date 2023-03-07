#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];

    printf("텍스트를 입력하시오: ");
    scanf("%[^\n]s", str);
    if (str[0] > 'Z')
        str[0] = toupper(str[0]);
    if (str[strlen(str) - 1] != '.')
        strcat(str, ".");
    printf("결과 텍스트 출력: %s", str);

    return 0;
}