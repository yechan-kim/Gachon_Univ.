#include <stdio.h>
#include <stdlib.h>

int main()
{
    long length1, length2;
    FILE *fp1 = fopen("sample.txt", "w");
    FILE *fp2 = fopen("binary.txt", "wb");

    if (fp1 == NULL)
    {
        fprintf(stderr, "텍스트 파일 sample.txt를 열 수 없습니다.\n");
        return 1;
    }
    if (fp2 == NULL)
    {
        fprintf(stderr, "텍스트 파일 binary.txt를 열 수 없습니다.\n");
        return 1;
    }

    for (int i = 0; i < 100; i++)
    {
        fprintf(fp1, "%d\n", rand());
        fprintf(fp2, "%d\n", rand());
    }

    fclose(fp1);
    fclose(fp2);

    fp1 = fopen("sample.txt", "r");
    fp2 = fopen("binary.txt", "rb");

    if (fp1 == NULL)
    {
        fprintf(stderr, "텍스트 파일 sample.txt를 열 수 없습니다.\n");
        return 1;
    }
    if (fp2 == NULL)
    {
        fprintf(stderr, "텍스트 파일 binary.txt를 열 수 없습니다.\n");
        return 1;
    }

    fseek(fp1, 0, SEEK_END);
    fseek(fp2, 0, SEEK_END);

    length1 = ftell(fp1);
    length2 = ftell(fp2);
    printf("sample.txt의 크기 = %ld 바이트\n", length1);
    printf("binary.txt의 크기 = %ld 바이트\n", length2);

    fclose(fp1);
    fclose(fp2);

    return 0;
}