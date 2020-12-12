#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void* thread_run(void *data) { //sleep(2);
    printf("[TH_1 %d]: Hello from the thread \n", pthread_self());
    sleep(1);
    (*(int*) data)++;
    printf("[TH_1 %d]: To exit...............\n", pthread_self());
    pthread_exit(data);

    return NULL;
}

int main() {
    pthread_t thread;
    int data = 0;
    int thread_rc = 0;

    printf("[MAIN %d]: Starting............ \n", pthread_self());
    if ((thread_rc = pthread_create(&thread, NULL, thread_run, &data)) != 0) {
        printf("Error creating the thread. Code %i", thread_rc);
        return -1;
    }

    sleep(1);
    printf("[MAIN %d]: Thread allocated \n", pthread_self());

    int *ptr_output_data;
    pthread_join(thread, (void**) &ptr_output_data);
    printf("[MAIN %d]: Thread returns %d \n", pthread_self(), *ptr_output_data);

    return 0;
}
