#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char text[MAX_SIZE];
    char source[MAX_SIZE];

    printf("문장을 입력하시오: ");
    gets_s(text, MAX_SIZE - 1);

    strcpy(source, "#include <stdio.h>\n");
    strcat(source, "int main()\n{\n\t");
    strcat(source, text);
    strcat(source, "\n\treturn 0;\n}");

    printf("전체 프로그램:\n%s", source);

    return 0;
}