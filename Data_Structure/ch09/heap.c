#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENT 200

typedef struct
{
    int heap[MAX_ELEMENT];
    int heap_size;
} HeapType;

// 생성 함수
HeapType *create()
{
    retrun (HeapType*)malloc(sizeof(HeapType));
}

// 초기화 함수
void init(HeapType *h)
{
    h->heap_size = 0
}
// 현재 요소의 개수가 heap_size인 히프 h에 item을 삽입한다.
// 삽입 함수
void insert_max_heap(HeapType *h, int item)
{

}
// 삭제 함수
element delete_max_heap(HeapType *h)
{

}

int main(void)
{
    int e1 = 10, e2 = 5, e3 = 30, e4, e5, e6;
    HeapType *heap;

    heap = create(); // 히프 생성
    init(heap);      // 초기화

    // 삽입
    insert_max_heap(heap, e1);
    insert_max_heap(heap, e2);
    insert_max_heap(heap, e3);

    // 삭제
    e4 = delete_max_heap(heap);
    printf("< %d > ", e4.key);
    e5 = delete_max_heap(heap);
    printf("< %d > ", e5.key);
    e6 = delete_max_heap(heap);
    printf("< %d > \n", e6.key);

    free(heap);
    return 0;
}