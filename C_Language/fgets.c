#include <stdio.h>
int main(void)
{
    FILE *fp;
    char str[100];

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
        printf("파일 열기 실패\n");
    else
        printf("파일 열기 성공\n");

    if (fgets(str, 100, fp) != NULL)
        puts(str);

    fclose(fp);

    return 0;
}