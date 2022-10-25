#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(sizeof(int));

    if (ptr == NULL) {
        fprintf(stderr, "Dynamic memory cannot be allocated.\n");
        exit(1);
    }

    // FIXME: Memory allocated is not released!

    return 0;
}
