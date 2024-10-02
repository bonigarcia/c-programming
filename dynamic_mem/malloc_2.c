#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
    int *ptr = (int*) malloc(SIZE * sizeof(int));

    if (ptr == NULL) {
        fputs("Dynamic memory cannot be allocated\n", stderr);
        exit(1);
    }

    // FIXME: Memory allocated is not released!

    return 0;
}
