#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("sample.txt", "w");
    fprintf(fp, "2017.03.01 매출: %10d \n", 200000);

    fclose(fp);
    return 0;
}