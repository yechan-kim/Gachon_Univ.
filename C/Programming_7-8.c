#include <stdio.h>
#include <math.h>
#define SIZE 5

int main()
{
    double sum = 0, avg, std_dev, num[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("실수를 입력하세요: ");
        scanf("%lf", &num[i]);
        sum += num[i];
    }
    avg = sum / SIZE;
    sum=0;

    for (i = 0; i < SIZE; i++)
        sum += pow(num[i] - avg, 2);
    std_dev = sqrt(sum / SIZE);

    printf("평균: %.2lf\n표준편차: %lf",avg,std_dev);

    return 0;
}