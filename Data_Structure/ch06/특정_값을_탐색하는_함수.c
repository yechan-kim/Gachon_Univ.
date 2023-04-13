#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct ListNode
{ // 노드 타입
    element data;
    struct ListNode *link;
} ListNode;

ListNode *insert_first(ListNode *head, element value)
{
    ListNode *p = (ListNode *)malloc(sizeof(ListNode)); //(1)
    p->data = value;                                    // (2)
    p->link = head;                                     // 헤드 포인터의 값을 복사//(3)
    head = p;                                           // 헤드 포인터 변경//(4)
    return head;
}

void print_list(ListNode *head)
{
    for (ListNode *p = head; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("NULL \n");
}
ListNode *search_list(ListNode *head, element x)
{
    ListNode *p = head;

    while (p != NULL)
    {
        if (p->data == x)
            return p;
        p = p->link;
    }
    return NULL; // 탐색 실패
}

void p_search_list(ListNode *head, int F)
{
    if (search_list(head, F) != NULL)
        printf("리스트에서 %d을 찾았습니다. \n",F);
    else
        printf("리스트에서 %d을 찾지 못했습니다. \n",F);
}

// 테스트 프로그램
int main(void)
{
    ListNode *head = NULL;

    int find;
    printf("찾고자 하는 값을 입력하세요.: ");
    scanf("%d",&find);

    head = insert_first(head, 10);
    print_list(head);
    head = insert_first(head, 20);
    print_list(head);
    head = insert_first(head, 30);
    print_list(head);

    p_search_list(head, find);

    return 0;
}