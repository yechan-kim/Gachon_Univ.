#include <stdio.h>

int main()
{
    char name[30];
    int age, money;
    FILE *fp = fopen("employee.txt", "w");

    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다.");
        return 1;
    }

    printf("직원 이름: ");
    scanf("%s", name);
    fprintf(fp, "직원 이름: %s\n", name);

    printf("나이: ");
    scanf("%d", &age);
    fprintf(fp, "나이: %d\n", age);

    printf("월급: ");
    scanf("%d", &money);
    fprintf(fp, "월급: %d\n", money);

    fclose(fp);

    return 0;
}