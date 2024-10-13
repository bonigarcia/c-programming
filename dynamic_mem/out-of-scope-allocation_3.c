#include <stdio.h>
#include <stdlib.h>

int* allocate() {
    return (int*) malloc(sizeof(int));
}

int main() {
    int *ptr = allocate();

    *ptr = 42;
    printf("*ptr=%d\n", *ptr);

    free(ptr);

    return 0;
}
