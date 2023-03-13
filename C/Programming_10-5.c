#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];

    printf("텍스트를 입력하시오: ");
    scanf("%[^\n]s", str);
    printf("최종 텍스트: ");
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            continue;

        printf("%c", str[i]);
    }

    return 0;
}