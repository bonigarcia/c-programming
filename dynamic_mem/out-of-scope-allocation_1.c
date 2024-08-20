#include <stdio.h>
#include <stdlib.h>

void allocate(int *ptr) {
    ptr = (int*) malloc(sizeof(int));
}

int main() {
    int *ptr;
    allocate(ptr);

    *ptr = 42;
    printf("*ptr=%d\n", *ptr);

    free(ptr);

    return 0;
}
