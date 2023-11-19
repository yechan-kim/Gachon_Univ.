#include <stdio.h>
#include <assert.h>
#include <pthread.h>

int buffer;
int count = 0;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
int loops = 10;

void put(int value)
{
    assert(count == 0);
    count = 1;
    buffer = value;
}

int get()
{
    assert(count == 1);
    count = 0;
    return buffer;
}

void *producer(void *arg)
{
    int i;
    for (i = 0; i < loops; i++)
    {
        pthread_mutex_lock(&mutex); // p1
        if (count == 1) // p2
            pthread_cond_wait(&cond, &mutex); // p3
        put(i); // p4
        pthread_cond_signal(&cond); // p5
        pthread_mutex_unlock(&mutex); // p6
    }
    return NULL;
}

void *consumer(void *arg)
{
    int i;
    for (i = 0; i < loops; i++)
    {
        pthread_mutex_lock(&mutex); // c1
        if (count == 0) // c2
            pthread_cond_wait(&cond, &mutex); // c3
        int tmp = get(); // c4
        pthread_cond_signal(&cond); // c5
        pthread_mutex_unlock(&mutex); // c6
        printf("%d\n", tmp);
    }
    return NULL;
}

int main()
{
    pthread_t c1, c2, p;

    pthread_create(&c1, NULL, consumer, NULL);
    pthread_create(&c2, NULL, consumer, NULL);
    pthread_create(&p, NULL, producer, NULL);

    pthread_join(c1, NULL);
    pthread_join(c2, NULL);
    pthread_join(p, NULL);

    return 0;
}