#include <stdio.h>
#include <pthread.h>

#define MAX 1000

int counter = 0;

void* count(void *arg) {
    for (int i = 0; i < MAX; i++) {
        counter++;
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

    return 0;
}
