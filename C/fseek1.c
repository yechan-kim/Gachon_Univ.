#include <stdio.h>
#include <stdlib.h>

int main()
{
    long length;

    FILE *fp = fopen("binary.txt", "rb");
    if (fp == NULL)
    {
        printf("binary.txt를 열 수 없습니다.");
        return 1;
    }
    fseek(fp, 0, SEEK_END);

    length = ftell(fp);
    printf("파일 크기 = %d 바이트\n", length);
    fclose(fp);

    return 0;
}