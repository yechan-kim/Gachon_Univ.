#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int cnt = 1;

    printf("텍스트를 입력하시오: ");
    scanf("%[^\n]s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
            cnt++;
    }
    printf("단어의 갯수: %d", cnt);

    return 0;
}