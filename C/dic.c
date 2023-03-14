#include <stdio.h>
#include <string.h>
#define WORDS 5

int main()
{
    char dic[WORDS][2][30] = {
        {"book", "책"},
        {"boy", "소년"},
        {"computer", "컴퓨터"},
        {"language", "언어"},
        {"rain", "비"}},
         word[30];

    printf("단어를 입력하사오: ");
    scanf("%s", word);
    for (int i = 0; i < WORDS; i++)
    {
        if (strcmp(dic[i][0], word) == 0)
        {
            printf("%s: %s", dic[i][0], dic[i][1]);
            return 0;
        }
    }

    printf("입력된 단어는 사전에서 찾을 수 없습니다.");

    return 0;
}
