#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(sizeof(int)); // normal pointer
    *ptr = 10;

    printf("*ptr=%d\n", *ptr);

    free(ptr);

    // here ptr acts as a dangling pointer
    printf("*ptr=%d\n", *ptr);

    return 0;
}
