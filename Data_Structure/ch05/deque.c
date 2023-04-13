#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct
{
    int data[MAX];
    int front, rear;
} deque;

void init_deque(deque *q)
{
    q->front = q->rear = 0;
}

int is_full(deque *q)
{
    return ((q->rear + 1) % MAX == q->front);
}

int is_empty(deque *q)
{
    return (q->rear == q->front);
}

void add_front(deque *q, int X)
{
    if (is_full(q))
    {
        printf("덱이 포화 상태입니다.");
        exit(1);
    }
    else
    {
        q->data[q->front] = X;
        q->front = (q->front + MAX - 1) % MAX;
    }
}

void add_rear(deque *q, int X)
{
    if (is_full(q))
    {
        printf("덱이 포화 상태입니다.");
        exit(1);
    }
    else
    {
        q->front = (q->front + 1) % MAX;
        q->data[q->rear] = X;
    }
}

void deque_print(deque *q)
{
    printf("DEQUE(front=%d rear=%d) = ", q->front, q->rear);
    if (!is_empty(q))
    {
        int i = q->front;
        do
        {
            i = (i + 1) % (MAX);
            printf("%d | ", q->data[i]);
            if (i == q->rear)
                break;
        } while (i != q->front);
    }
    printf("\n");
}

int delete_rear(deque *q)
{
    int prev = q->rear;
    if (is_empty(q))
    {
        printf("덱이 공백 상태입니다.");
        exit(1);
    }
    else
    {
        q->rear = (q->rear - 1 + MAX) % MAX;
        return q->data[prev];
    }
}

int delete_front(deque *q)
{
    if (is_empty(q))
    {
        printf("덱이 공백 상태입니다.");
        exit(1);
    }
    else
    {
        q->front = (q->front + 1) % MAX
        return q->data[q->front];
    }
}

int main()
{
    deque q;
    init_deque(&q);
    for (int i = 0; i < 3; i++)
    {
        add_front(&q, i);
        deque_print(&q);
    }

    for (int i = 0; i < 3; i++)
    {
        delete_rear(&q);
        deque_print(&q);
    }

    return 0;
}