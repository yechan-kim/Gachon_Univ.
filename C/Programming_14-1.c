#include <stdio.h>
#define DEBUG

double calc_array_avg(int *arr, int size)
{
    int i, sum = 0;
    double avg;
    printf("calc_array_avg()");
#ifdef DEBUG
    printf("\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
#endif
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
#ifdef DEBUG
        printf("\n%d을(를) 더하는 중", arr[i]);
#endif
    }
    avg = (double)sum / size;
    printf("\n평균 = %f\n", avg);
    return avg;
}

int main()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double arr_avg;

    arr_avg = calc_array_avg(num, sizeof(num) / sizeof(int));
    printf("배열의 평균 = %f", arr_avg);

    return 0;
}