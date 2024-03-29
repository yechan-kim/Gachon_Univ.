#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENT 100

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
    h->size = 0;
}
// 현재 요소의 개수가 size인 히프 h에 item을 삽입한다.
// 삽입 함수
void insert_max_heap(HeapType *h, int item)
{
    int i = ++(h->size);
    while ((i != 1) && (item > h->heap[i / 2]))
    {
        h->heap[i] = h->heap[i / 2];
        i /= 2;
    }
    h->heap[i] = item;
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

void print_heap(HeapType *h)
{
    for (int i = 1; i <= h->size; i++)
    {
        printf("%d: [%d], ", i, h->heap[i]);
    }
    printf("\n");
}

int main(void)
{
    int e[MAX_ELEMENT];
    HeapType *heap;

    heap = create(); // 히프 생성
    init(heap);      // 초기화

    // 삽입
    for (int i = 1; i < MAX_ELEMENT; i++)
    {
        e[i]= rand()%99;
        insert_max_heap(heap, e[i]);
    }
        

    print_heap(heap);

    // 삭제
    for (int i = 1; i < MAX_ELEMENT; i++)
    {
        printf("< %d > \n", delete_max_heap(heap));
    print_heap(heap);
    }

    free(heap);
    return 0;
}