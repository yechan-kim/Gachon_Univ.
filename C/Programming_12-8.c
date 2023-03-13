#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp1 = NULL, *fp2 = NULL;
    char fname1[100], fname2[100], str1[100], str2[100];

    printf("첫번째 파일 이름: ");
    scanf("%s", fname1);
    printf("두번째 파일 이름: ");
    scanf("%s", fname2);

    fp1 = fopen(fname1, "r");
    fp2 = fopen(fname2, "r");

    while (1)
    {
        fgets(str1, 100, fp1);
        fgets(str2, 100, fp2);

        if ((strcmp(str1, str2)) != 0)
        {
            printf("%s\n%s\n", str1, str2);
            break;
        }
        if ((fgets(str1, 100, fp1) == NULL & fgets(str2, 100, fp2) == NULL) || (fgets(str2, 100, fp2) == NULL & fgets(str1, 100, fp1) == NULL))
        {
            printf("파일은 서로 일치함");
            break;
        }
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}