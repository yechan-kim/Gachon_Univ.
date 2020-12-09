#include <stdio.h>

int get_sum_of_array(int *arr, int size)
{
    int i, sum=0;
    for(i=0; i<size; i++)
        sum+=arr[i];
    return sum;
}

void print_array(int *arr, int size)
{
    printf("[ ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("]");
}