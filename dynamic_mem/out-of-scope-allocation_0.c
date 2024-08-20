#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // TODO: Do memory allocation in a different function
    ptr = (int*) malloc(sizeof(int));

    *ptr = 42;
    printf("*ptr=%d\n", *ptr);

    free(ptr);

    return 0;
}
