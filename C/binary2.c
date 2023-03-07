#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int buffer[SIZE];
    FILE *fp = NULL;
    size_t size;

    fp = fopen("binary.txt", "rb");
    if (fp == NULL)
    {
        fprintf(stderr, "binary.txt 파일을 열 수 없습니다.");
        exit(1);
    }

    size = fread(buffer, sizeof(int), SIZE, fp);

    if (size != SIZE)
        fprintf(stderr, "읽기 동작 중 오류기 발생했습니다.\n");

    fclose(fp);

    for (int i = 0; i < SIZE; i++)
        printf("%d\n", buffer[i]);

    return 0;
}