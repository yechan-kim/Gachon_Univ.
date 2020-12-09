#include <stdio.h>
#include <stdlib.h>

struct course
{
    char subject[30];
    double marks;
};

int main()
{
    int i, size;
    struct course *c;

    printf("구조체의 개수: ");
    scanf("%d", &size);

    c = (struct course *)malloc(sizeof(struct course) * size);

    for (i = 0; i < size; i++)
    {
        printf("과목이름과 성적을 입력허사오: ");
        scanf("%s %lf", (c + i)->subject, &(c + i)->marks);
    }

    printf("\n저장된 정보 출력: \n");

    for (i = 0; i < size; i++)
        printf("%s: %lf\n", (c + i)->subject, (c + i)->marks);

    free(c);

    return 0;
}