#include <stdio.h>

int main()
{
    char v = ' ';
    int cnt = 0;

    printf("문자를 입력하시오: ");
    scanf("%c", &v);

    while (v != '.')
    {

        if (v == 'a')
            cnt++;

        printf("문자를 입력하시오: (종료 .)");
        scanf(" %c", &v);
    }

    printf("a의 개수=%d", cnt);

    return 0;
}