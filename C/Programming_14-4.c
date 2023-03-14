#include <stdio.h>
#include "Programming_14-4(array).h"

int main()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    print_array(num, sizeof(num) / sizeof(int));
    printf("\n배열 요소들의 합 = %d", get_sum_of_array(num, sizeof(num) / sizeof(int)));

    return 0;
}