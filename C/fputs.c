#include <stdio.h>
int main(void)
{
    FILE* fp;
    char str[256];

    printf("문자열을 입력하시오: ");
    gets(str);

    fp = fopen("sample.txt", "w");

    if (fp == NULL)
        printf("파일 열기 실패\n");
    else
        printf("파일 열기 성공\n");

    fputs(str, fp);

    fclose(fp);

    return 0;
}