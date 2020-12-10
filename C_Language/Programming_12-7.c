#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char fname[100];

    printf("파일 이름을 입력하시오: ");
    scanf("%s", fname);

    fp = fopen(fname, "w");

    while (1)
    {
        char str[100];
        scanf("%s", str);
        if (strlen(str) == 0)
            break;
        else
            fputs(str, fp);
    }

    fclose(fp);

    return 0;
}