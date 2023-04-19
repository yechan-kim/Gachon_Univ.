#include <stdio.h>
#include <stdlib.h>

typedef struct queuenode
{
    int data;
    struct queuenode *link;
} queuenode;

typedef struct queue
{
    queuenode *front, *rear;
} queue;

void init(queue *q)
{
    q->front = NULL;
    q->rear = NULL;
}

void enqueue(queue *q, int X)
{
    queuenode *temp = (queuenode *)malloc(sizeof(queuenode));
    temp->data = X;
    temp->link = NULL;
    if (q->front == NULL)
    {
        q->front = temp;
        q->rear = temp;
    }
    else
    {
        q->rear->link = temp;
        q->rear = temp;
    }
}

int dequeue(queue *q)
{
    if (q->front == NULL)
    {
        printf("큐는 공백상태입니다.");
        exit(1);
    }
    else
    {
        queuenode *temp = q->front;
        int data = q->rear->data;
        q->front = q->front->link;
        if (q->front == NULL)
            q->rear = NULL;
        free(temp);
        return data;
    }
}

void print_queue(queue *q)
{
    queuenode *p;
    for (p = q->front; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("NULL\n");
}

int main(void)
{
    queue q;

    init(&q); // 큐 초기화

    enqueue(&q, 1);
    print_queue(&q);
    enqueue(&q, 2);
    print_queue(&q);
    enqueue(&q, 3);
    print_queue(&q);
    dequeue(&q);
    print_queue(&q);
    dequeue(&q);
    print_queue(&q);
    dequeue(&q);
    print_queue(&q);
    return 0;
}
