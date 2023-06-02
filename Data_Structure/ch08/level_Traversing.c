#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
    int data;
    struct TreeNode *left, *right;
} TreeNode;

#define MAX 1
typedef struct queue
{
    TreeNode *data[MAX];
    int front, rear;
} queue;

void init_queue(queue *q)
{
    q->front = q->rear = 0;
}

void enqueue(queue *q, TreeNode *t)
{
    if (q->front == ((q->rear) + 1) % MAX)
        printf("queue is full\n");
    else
    {
        q->rear = ((q->rear) + 1) % MAX;
        q->data[q->rear] = t;
    }
}

TreeNode *dequeue(queue *q)
{
    if (q->front == q->rear)
    {
        printf("queue is empty\n");
        return NULL;
    }
    else
    {
        q->front = ((q->front) + 1) % MAX;
        return q->data[q->front];
    }
}
void level(TreeNode *t)
{
    queue q;
    init_queue(&q);

    if (t == NULL)
        return;

    enqueue(&q, t);
    while (q.front != q.rear)
    {
        t = dequeue(&q);
        printf(" [%d] ", t->data);
        if (t->left)
            enqueue(&q, t->left);
        if (t->right)
            enqueue(&q, t->right);
    }
}

//		  15
//	   4		 20
//    1	      16  25
TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n4};
TreeNode n6 = {15, &n2, &n5};
TreeNode *root = &n6;

int main(void)
{
    printf("레벨 순회=");
    level(root);
    printf("\n");
    return 0;
}