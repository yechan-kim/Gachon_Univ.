#include <stdio.h>
#include <string.h>
#define MAX_SIZE 30

void del_space(char *arr, char *temp);

int main()
{
    char text[MAX_SIZE];
    char temp[MAX_SIZE];

    printf("텍스트를 입력하시오:");
    gets_s(text, MAX_SIZE - 1);

    del_space(text, temp);

    printf("%s", temp);

    return 0;
}

void del_space(char *arr, char *temp)
{
    int i, j = 0;
    for (i = 0; i < strlen(arr); i++)
    {
        if (arr[i] != ' ')
        {
            temp[j] = arr[i];
            j++;
        }
    }
    temp[j] = '\0';
}