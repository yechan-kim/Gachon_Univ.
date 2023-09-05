#include <stdio.h>
#include <stdlib.h>
#include <pthread.h> // pthread.h: 쓰레드를 사용하기 위한 헤더

volatile int counter = 0; // volatile: 무조건 메모리에 접근하도록 함
int loops;

void *worker(void *arg)
{
    int i;
    for (i = 0; i < loops; i++)
    {
        counter++;
    }
    return NULL;
}

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        fprintf(stderr, "usage: threads <value>\n");
        exit(1);
    }

    loops = atoi(argv[1]);
    pthread_t p1, p2; // pthread_t: ptherad의 자료형
    printf("Initial value: %d\n", counter);

    pthread_create(&p1, NULL, worker, NULL); // pthread_create: 쓰레드 생성
    pthread_create(&p2, NULL, worker, NULL); // p1, p2: 쓰레드 식별자
    pthread_join(p1, NULL); // pthread_join: 쓰레드가 종료될 때까지 기다리고 메모리를 해제
    pthread_join(p2, NULL);
    printf("Final value: %d\n", counter);

    return 0;    
}