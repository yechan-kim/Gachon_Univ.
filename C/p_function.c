#include <stdio.h>
#define SIZE 5

double get_avg(int values[], int n);
void check_values(int values[], int n);

int main(void)
{
    int i, data[5];
    double result;

    for (i = 0; i < SIZE; i++)
    {
        printf("값을 입력하시오: ");
        scanf("%d", &data[i]);
    }
    check_values(data, SIZE);
    result = get_avg(data, SIZE);
    printf("값들의 평균은 %f\n", result);

    return 0;
}

double get_avg(int values[], int n)
{
    int i;
    double sum = 0.0;

    for (i = 0; i < n; i++)
        sum += values[i];
    return sum / n;
}

void check_values(int values[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (values[i] < 0)
            values[i] = 0;
    }
}