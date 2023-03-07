#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
    int buffer[] = {10, 20, 30, 40, 50};
    FILE *fp = NULL;

    fp = fopen("binary.txt", "wb");
    if (fp == NULL)
    {
        fprintf(stderr, "binary.txt 파일을 열 수 없습니다.");
        exit(1);
    }

    fwrite(buffer, sizeof(int), SIZE, fp);

    return 0;
}