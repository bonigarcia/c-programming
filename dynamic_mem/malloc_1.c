#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
    int *ptr = (int*) malloc(SIZE * sizeof(int));

    if (ptr == NULL) {
        fprintf(stderr, "Dynamic memory cannot be allocated.\n");
        exit(1);
    }

    for (int i = 0; i < SIZE; i++) {
        *(ptr + i) = i;  // alternatively: ptr[i] = i;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("The address %p contains %d\n", (ptr + i), *(ptr + i));
    }

    free(ptr);

    return 0;
}
