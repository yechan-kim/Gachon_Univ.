#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <pthread.h>
#include <unistd.h>

#define BUFFER_SIZE 15
#define MAX_BUFFER_SIZE (BUFFER_SIZE - 1)

int buffer[BUFFER_SIZE];
volatile int count = 0;
int cnt = 0;
int cnt_A = 0;
int cnt_B = 0;
int cnt_C = 0;
pthread_cond_t empty = PTHREAD_COND_INITIALIZER;
pthread_cond_t fill = PTHREAD_COND_INITIALIZER;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void put(int value)
{
    assert(count < BUFFER_SIZE);
    buffer[count++] = value;
}

int get()
{
    assert(count != 0);
    return buffer[--count];
}

void *A(void *arg)
{
    for (int i = 'A'; i <= 'Z'; i++)
    {
        pthread_mutex_lock(&mutex);
        while (count > MAX_BUFFER_SIZE)
            pthread_cond_wait(&empty, &mutex);
        put(i);
        cnt_A++;
        pthread_cond_signal(&fill);
        pthread_mutex_unlock(&mutex);
        if (i == 'Z')
            i = 'A' - 1;
    }
    return NULL;
}

void *B(void *arg)
{
    for (int i = 'a'; i <= 'z'; i++)
    {
        pthread_mutex_lock(&mutex);
        while (count > MAX_BUFFER_SIZE)
            pthread_cond_wait(&empty, &mutex);
        put(i);
        cnt_B++;
        pthread_cond_signal(&fill);
        pthread_mutex_unlock(&mutex);
        if (i == 'z')
            i = 'a' - 1;
    }
    return NULL;
}

void *C(void *arg)
{
    for (int i = 1; i <= 50; i++)
    {
        pthread_mutex_lock(&mutex);
        while (count > MAX_BUFFER_SIZE)
            pthread_cond_wait(&empty, &mutex);
        put(i);
        cnt_C++;
        pthread_cond_signal(&fill);
        pthread_mutex_unlock(&mutex);
        if (i == 50)
            i = 0;
    }
    return NULL;
}

void *D(void *arg)
{
    while (true)
    {
        pthread_mutex_lock(&mutex);
        while (count == 0)
            pthread_cond_wait(&fill, &mutex);
        int tmp = get();
        pthread_cond_signal(&empty);
        pthread_mutex_unlock(&mutex);
        if (tmp > 0 && tmp <= 50)
            printf("%d\t", tmp);
        else
            printf("%c\t", tmp);
        cnt++;
        if (cnt % 10 == 0)
            printf("\n");
    }
    return NULL;
}

void *timer(void *arg)
{
    sleep(5);
    printf("\nAtoZ: %d\n", cnt_A);
    printf("atoz: %d\n", cnt_B);
    printf("1to50: %d\n", cnt_C);
    exit(0);
}

int main()
{
    pthread_t t_A, t_B, t_C, t_D, t_timer;

    pthread_create(&t_timer, NULL, timer, NULL);
    pthread_create(&t_A, NULL, A, NULL);
    pthread_create(&t_B, NULL, B, NULL);
    pthread_create(&t_C, NULL, C, NULL);
    pthread_create(&t_D, NULL, D, NULL);

    pthread_join(t_timer, NULL);
    pthread_join(t_A, NULL);
    pthread_join(t_B, NULL);
    pthread_join(t_C, NULL);
    pthread_join(t_D, NULL);

    return 0;
}