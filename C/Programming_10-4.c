#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];

    printf("텍스트를 입력하시오: ");
    scanf("%[^\n]s", str);
    printf("공백이 제거된 텍스트: ");
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ' && str[i + 1] == ' ')
            continue;
        printf("%c", str[i]);
    }

    return 0;
}