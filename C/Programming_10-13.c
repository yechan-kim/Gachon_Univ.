#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    int i, j, cnt[26] = {0};
    char str[MAX_SIZE];

    printf("텍스트를 입력하시오: ");
    scanf("%[^\n]s", str);
    for (i = 0; i < strlen(str); i++)
    {
        for (j = 0; j < 26; j++)
        {
            if (str[i] == ('a' + j))
                cnt[j]++;
        }
    }
    for (j = 0; j < 26; j++)
        printf("%c: %d\n", 'a' + j, cnt[j]);

    return 0;
}