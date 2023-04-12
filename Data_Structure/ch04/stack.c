#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// 구조체로 구현
typedef struct
{
    int data[MAX];
    int top;
} stack_s;

// 전역번수로 구현
int s_g[MAX];
int top_g = -1;

// 스텍함수_전역
int is_empty()
{
    return top_g == -1;
}
int is_full()
{
    return top_g == (MAX - 1);
}
void push(int X)
{
    if (is_full())
    {
        printf("스텍이 포화 상태입니다.");
        exit(1);
    }
    else
        s_g[++(top_g)] = X;
}
int pop()
{
    if (is_empty())
    {
        printf("스텍이 공백 상태입니다.");
        exit(1);
    }
    else
        return s_g[(top_g)--];
}
int peek()
{
    if (is_empty())
    {
        printf("스텍이 공백 상태입니다.");
        exit(1);
    }
    else
        return s_g[top_g];
}

// 스텍함수_구조체
void init_stack(stack_s *s);
int is_empty(stack_s *s);
int is_full(stack_s *s);
void push(int X, stack_s *s);
int pop(stack_s *s);
int peek(stack_s *s);

int main()
{
    stack_s s;                                        // 정적 스텍
    stack_s* s_d = (stack_s *)malloc(sizeof(stack_s)); // 동적 스텍

    //정적 스텍
    init_stack(&s); 
    push(10, &s);
    printf("%d\n",peek(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",is_empty(&s));

    //동적 스텍
    init_stack(s_d);
    push(10, s_d);
    printf("%d\n",peek(s_d));
    printf("%d\n",pop(s_d));
    printf("%d\n",is_empty(s_d));

    // 전역변수 스텍
    push(10); 
    printf("%d\n",peek());
    printf("%d\n",pop());
    printf("%d\n",is_empty());
}

void init_stack(stack_s *s) // 스텍 초기화 함수
{
    s->top = -1;
}
int is_empty(stack_s *s)
{
    return s->top == -1;
}
int is_full(stack_s *s)
{
    return s->top == (MAX - 1);
}
void push(int X, stack_s *s)
{
    if (is_full(s))
    {
        printf("스텍이 포화 상태입니다.");
        exit(1);
    }
    else
        s->data[++(s->top)] = X;
}
int pop(stack_s *s)
{
    if (is_empty(s))
    {
        printf("스텍이 공백 상태입니다.");
        exit(1);
    }
    else
        return s->data[(s->top)--];
}
int peek(stack_s *s)
{
    if (is_empty(s))
    {
        printf("스텍이 공백 상태입니다.");
        exit(1);
    }
    else
        return s->data[s->top];
}