#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];

    printf("텍스트를 입력하시오: ");
    scanf("%[^\n]s", str);
    printf("대문자 출력: ");
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] > 'Z')
            printf("%c", toupper(str[i]));
        else
            printf("%c", str[i]);
    }

    return 0;
}