#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;

void* thread_1(void *data) {
    pthread_mutex_lock(&mutex1);
    pthread_mutex_lock(&mutex2);
    printf("[PTHR: %ld]: Thread 1 started\n", pthread_self());
    pthread_mutex_unlock(&mutex2);
    pthread_mutex_unlock(&mutex1);

    pthread_exit(NULL);
}

void* thread_2(void *data) {
    pthread_mutex_lock(&mutex2);
    pthread_mutex_lock(&mutex1);
    printf("[PTHR: %ld]: Thread 2 started\n", pthread_self());
    pthread_mutex_unlock(&mutex1);
    pthread_mutex_unlock(&mutex2);

    pthread_exit(NULL);
}

int main() {
    pthread_t tid1, tid2;

    pthread_create(&tid1, NULL, thread_1, NULL);
    pthread_create(&tid2, NULL, thread_2, NULL);

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    pthread_mutex_destroy(&mutex1);
    pthread_mutex_destroy(&mutex2);

    return 0;
}
