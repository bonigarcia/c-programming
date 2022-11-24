#include <stdio.h>
#include <pthread.h>

#define MAX 1000000

int counter = 0;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* count(void *arg) {
    for (int i = 0; i < MAX; i++) {
        pthread_mutex_lock(&mutex);
        counter++;
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t tid1, tid2;

    pthread_create(&tid1, NULL, count, NULL);
    pthread_create(&tid2, NULL, count, NULL);

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    printf("counter: %d\n", counter);

    pthread_mutex_destroy(&mutex);

    return 0;
}
