#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SOL "apple"

int main()
{
    char ans[100], s[] = SOL;
    int i, len;

    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        int pos1 = rand() % len;
        int pos2 = rand() % len;
        char tmp = s[pos1];
        s[pos1] = s[pos2];
        s[pos2] = tmp;
    }

    while (1)
    {
        printf("%s는 어떤 단어가 스크램블된 것일까요? ", s);
        scanf("%s", ans);

        if (strcmp(ans, SOL) == 0)
        {
            printf("축하합니다.");
            break;
        }
    }
}