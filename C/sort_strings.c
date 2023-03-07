#include <stdio.h>
#include <string.h>
#define SIZE 6

int main()
{
    int i, j;
    char fruits[SIZE][20] = {
        "pineapple",
        "banana",
        "apple",
        "tomato",
        "pear",
        "avocado"},
         tmp[20];

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE - 1; j++)
        {
            if (strcmp(fruits[j], fruits[j + 1]) > 0)
            {
                strcpy(tmp, fruits[j]);
                strcpy(fruits[j], fruits[j + 1]);
                strcpy(fruits[j + 1], tmp);
            }
        }
    }
    for (i = 0; i < SIZE; i++)
        printf("%s\n", fruits[i]);

    return 0;
}