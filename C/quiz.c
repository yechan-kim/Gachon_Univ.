#include <stdio.h>
#include <string.h>

int main()
{
    char key[] = "사과";
    char buffer[80];

    do
    {
        printf("내가 좋아하는 과일은 무엇일까요? ");
        scanf("%s", buffer);
    } while (strcmp(key, buffer) != 0);

    printf("맞았습니다.");

    return 0;
}