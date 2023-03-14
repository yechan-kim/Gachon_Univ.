#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fp;
    char fname[100];
    char str[100];

    printf("파일 이름을 입력하시오: ");
    scanf("%s", fname);

    fp = fopen(fname, "w");

    getchar();
    do {
        gets_s(str, sizeof(str));
        fputs(str, fp);
        fprintf(fp, "\n");
    } while (strlen(str) != 0);

    fclose(fp);

    return 0;
}