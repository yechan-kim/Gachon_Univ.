#include <stdio.h>
#include <string.h>
#define MAX_SIZE 30

int main()
{
    char text[MAX_SIZE];

    printf("텍스트를 입력하시오: ");
    scanf("%s", text);
    
    for (int i = strlen(text) - 1; i >= 0; i--)
        printf("%c", text[i]);

    return 0;
}