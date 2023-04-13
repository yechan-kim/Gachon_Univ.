#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct
{
    int data[MAX];
    int rear;
    int front;
} queue;

void init_q(queue *q)
{
    q->rear = -1;
    q->front = -1;
}

int is_empty(queue *q)
{
    return ((q->rear) == (q->front));
}

int is_full(queue *q)
{
    return ((q->rear) == MAX - 1);
}

void enqueue(int X, queue *q)
{
    if (is_full(q))
    {
        printf("큐가 포화상태입니다.");
        exit(1);
    }
    else
        q->data[++(q->rear)] = X;
}

int dequeue(queue *q)
{
    if (is_empty(q))
    {
        printf("큐가 공백상태입니다.");
        exit(1);
    }
    else
        return q->data[++(q->front)];
}

void print_queue(queue *q)
{
    for (int i = 0; i < MAX; i++)
    {
        if (i > (q->front) && i <= (q->rear))
            printf("%d|", q->data[i]);
        else
        {
            printf("  |");
        }
    }
    printf("\n");
}

int main()
{
    queue q;
    init_q(&q);
    enqueue(10, &q);
    print_queue(&q);
    enqueue(20, &q);
    print_queue(&q);
    enqueue(30, &q);
    print_queue(&q);
    dequeue(&q);
    print_queue(&q);
    dequeue(&q);
    print_queue(&q);
    dequeue(&q);
    print_queue(&q);
    return 0;
}