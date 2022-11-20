#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void* thread_run(void *data) {
    pthread_t pt_id = pthread_self();
    printf("[PTHR: %ld]: New thread started\n", pt_id);

    int *th_data = (int*) data;
    printf("[PTHR: %ld]: Data received: %d\n", pt_id, *th_data);

    sleep(3);

    printf("[PTHR: %ld]: Finishing new thread\n", pt_id);
    pthread_exit(NULL);
}

int main() {
    pthread_t thread_id;
    pthread_t main_id = pthread_self();
    int data = 10;

    printf("[MAIN: %ld]: Starting new thread from main\n", main_id);
    int thread_rc = pthread_create(&thread_id, NULL, thread_run, &data);
    if (thread_rc != 0) {
        printf("Error creating thread %i\n", thread_rc);
        exit(1);
    }

    pthread_join(thread_id, NULL);
    printf("[MAIN: %ld]: Thread finished\n", main_id);

    return 0;
}
