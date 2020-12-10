#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp = fopen("sample.txt", "r");
    char ch;
    int line = 0;

    if (fp == NULL)
    {
        fprintf(stderr, "텍스트 파일 sample.txt를 열 수 없습니다.\n");
        return 1;
    }

    while ((ch = getc(fp)) != EOF)
    {
        if (ch == '\n')
            line++;
        putchar(ch);
    }

    fclose(fp);

    printf("\n라인의 개수=%d\n", line);

    return 0;
}