#include <stdio.h>

int main()
{
    FILE *fp;
    char fname[100], str[100];
    int cnt = 1;

    printf("파일 이름을 입력하시오: ");
    scanf("%s", fname);

    fp = fopen(fname, "r");

    while (1)
    {
        char *p = fgets(str, 100, fp);
        if (p == NULL)
            break;
        printf("%d %s", cnt, p);
        cnt++;
    }

    fclose(fp);

    return 0;
}