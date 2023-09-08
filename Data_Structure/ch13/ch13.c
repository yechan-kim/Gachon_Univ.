#include <stdio.h>

#define MAX_SIZE 1000
#define INDEX_SIZE 10

int list[MAX_SIZE] = {3, 9, 15, 22, 31, 55, 67, 88, 91};
int n = 9;
typedef struct
{
    int key;
    int index;
} itable;
itable index_list[INDEX_SIZE] = {{3, 0}, {15, 2}, {67, 6}};

int seq_search(int key, int low, int high)
{
    int i;
    for (i = low; i <= high; i++)
        if (list[i] == key)
            return i; /* 탐색에 성공하면 키 값의 인덱스 반환 */
    return -1;        /* 탐색에 실패하면 -1 반환 */
}

/* INDEX_SIZE는 인덱스 테이블의 크기,n은 전체 데이터의 수 */
int index_search(int key)
{
    int i;
    if(key < list[0] || key > list[n-1])
        return -1;
    
    for(i=0; i< INDEX_SIZE; i++)
        if(index.list[i].key <= key && index_list[i+1].key > key)
            break;
    if(i== INDEX_SIZE)
    {
        low=index_list[i-1].index;
        high = n;
    }
    else
    {
        low = index_list[i].index;
        high = index_list[i+1].index;
    }

    return seq_search(key,low,high);
}

int main()
{
    int i;
    i = index_search(67);
    if (i >= 0)
        printf("탐색 성공 i=%d\n", i);
    else
        printf("탐색 실패\n");

    return 0;
}