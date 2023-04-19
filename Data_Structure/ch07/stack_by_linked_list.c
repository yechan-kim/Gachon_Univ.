#include <stdio.h>
#include <stdlib.h>

typedef struct stacknode
{
    int data;
    struct stacknode *link;
} stacknode;

typedef struct stack
{
    stacknode *top;
} stack;

void init(stack *s)
{
    s->top = NULL;
}

int pop(stack *s)
{
    if (s->top == NULL)
    {
        printf("스텍이 공백상태입니다.");
        exit(1);
    }
    else
    {
        int data = s->top->data;
        s->top = s->top->link;
        return data;
    }
}

int peak(stack *s)
{
    if (s->top == NULL)
    {
        printf("스텍이 공백상태입니다.");
        exit(1);
    }
    else
    {
        int data = s->top->data;
        return data;
    }
}

void push(stack *s, int X)
{
    stacknode *temp = (stacknode *)malloc(sizeof(stacknode));
    temp->data = X;
    temp->link = s->top;
    s->top = temp;
}

void print_stack(stack *s)
{
    for (stacknode *p = s->top; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("NULL\n");
}

int main(void)
{
    stack s;
    init(&s);
    push(&s, 1);
    print_stack(&s);
    push(&s, 2);
    print_stack(&s);
    push(&s, 3);
    print_stack(&s);
    pop(&s);
    print_stack(&s);
    pop(&s);
    print_stack(&s);
    pop(&s);
    print_stack(&s);
    return 0;
}
