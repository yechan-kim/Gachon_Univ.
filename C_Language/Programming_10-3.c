#include <stdio.h>
#include <string.h>
#define MAX_SIZE 30

int main()
{
    int i, l, j, cnt[26] = {0};
    char s[MAX_SIZE];

    printf("입력 문자열: ");
    scanf("%s", s);
    l = strlen(s);
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < 26; j++)
        {
            if (s[i] == ('a' + j))
                cnt[j]++;
        }
    }
    for (j = 0; j < 26; j++)
    {
        if (cnt[j] != 0)
            printf("%c문자가 %d번 등장하였음!\n", 'a' + j, cnt[j]);
    }

    return 0;
}