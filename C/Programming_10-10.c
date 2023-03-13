#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];

    printf("문자열을 입력하시오: ");
    scanf("%[^\n]s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != str[strlen(str) - 1 - i])
        {
            printf("입력한 문자열은 회문이 아닙니다.");
            return 0;
        }
    }

    printf("입력한 문자열은 회문입니다.");

    return 0;
}