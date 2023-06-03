#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENT 200

typedef struct
{
    int heap[MAX_ELEMENT];
    int size;
} HeapType;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 생성 함수
HeapType *create()
{
    return (HeapType *)malloc(sizeof(HeapType));
}

// 초기화 함수
void init(HeapType *h)
{
    h->heap_size = 0;
}

// 현재 요소의 개수가 heap_size인 히프 h에 item을 삽입한다.
// 삽입 함수
void insert_max_heap(HeapType *h, int item)
{
    int i;
    i = ++(h->heap_size);
    //  트리를 거슬러 올라가면서 부모 노드와 비교하는 과정
    while ((i != 1) && (item.key > h->heap[i / 2].key))
    {
        h->heap[i] = h->heap[i / 2];
        i /= 2;
    }
    h->heap[i] = item; // 새로운 노드를 삽입
}

// 삭제 함수
int delete_max_heap(HeapType *h)
{
    int temp = h->heap[1];

    h->heap[1] = h->heap[h->size];
    int i = --(h->size);

    for (int j = 1; j < i / 2; j++)
    {
        if (h->heap[j] < h->heap[j * 2] || h->heap[j] < h->heap[j * 2 + 1])
        {
            if (h->heap[j * 2] < h->heap[j * 2 + 1])
                swap(&(h->heap[j]), &(h->heap[j * 2 + 1]));
            else
                swap(&(h->heap[j]), &(h->heap[j * 2]));
        }
    }

    return temp;
}

void heap_sort(element a[], int n)
{
    int i;
    HeapType *h;
    h = create();
    init(h);

    for (i = 0; i < n; i++)
        insert_max_heap(h, a[i]);

    for (i = (n - 1); i >= 0; i--)
        a[i] = delete_max_heap(h);

    free(h);
}

#define SIZE 8

int main(void)
{
    int list[SIZE] = {23, 56, 11, 9, 56, 99, 27, 34};

    heap_sort(list, SIZE);

    for (int i = 0; i < SIZE; i++)
        printf("%d ", list[i].key);
    printf("\n");

    return 0;
}