#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
    int *ptr = (int*) calloc(SIZE, sizeof(int));

    for (int i = 0; i < SIZE; i++) {
        ptr[i] = i;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("The address %p contains %d\n", (ptr + i), ptr[i]);
    }

    free(ptr);

    return 0;
}
