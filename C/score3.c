#include <stdio.h>

int main()
{
    FILE *fp;
    int num, score;
    char ch, name[30];

    fp = fopen("scores.txt", "w");
    if (fp == NULL)
    {
        printf("성적파일 scores.txt를 열 수 없습니다.");
        return 1;
    }

    do
    {
        printf("\n학번 : ");
        scanf("%d", &num);
        printf("이름 : ");
        scanf("%s", name);
        printf("성적 : ");
        scanf("%d", &score);

        fprintf(fp, "%d %s %d", num, name, score);
        printf("데이터 추가를 계속하시겠습니까? (y/n) : ");
        ch = getche();
    } while (ch != 'n');

    fclose(fp);
    return 0;
}