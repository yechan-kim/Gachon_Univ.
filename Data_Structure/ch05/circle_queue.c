#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct
{
    int data[MAX];
    int front, rear;
} queue;

void init_queue(queue *q)
{
    q->front = q->rear = 0;
}

int is_empty(queue *q)
{
    return (q->front == q->rear);
}

int is_full(queue *q)
{
    return ((q->rear + 1) % MAX == q->front);
}

int dequeue(queue *q)
{
    if (is_empty(q))
    {
        printf("큐는 공백 상태입니다.");
        exit(1);
    }
    else
    {
        q->front = (q->front + 1) % MAX;
        return q->data[q->front];
    }
}

void enqueue(int X, queue *q)
{
    if (is_full(q))
    {
        printf("큐는 포화 상태입니다.");
        exit(1);
    }
    else
    {
        q->rear = (q->rear + 1) % MAX;
        q->data[q->rear] = X;
    }
}

void queue_print(queue *q)
{
    printf("QUEUE(front=%d rear=%d) = ", q->front, q->rear);
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

int main()
{
    queue q;
    int element;
    init_queue(&q);

    printf("--데이터 추가 단계--\n");
    while (!is_full(&q))
    {
        printf("정수를 입력하시오: ");
        scanf("%d", &element);
        enqueue(element, &q);
        queue_print(&q);
    }
    printf("큐는 포화상태입니다.\n\n");

    printf("--데이터 삭제 단계--\n");
    while (!is_empty(&q))
    {
        element = dequeue(&q);
        printf("꺼내진 정수: %d \n", element);
        queue_print(&q);
    }
    printf("큐는 공백상태입니다.\n");
    return 0;
}