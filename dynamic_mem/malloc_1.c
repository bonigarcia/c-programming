#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(sizeof(int));

    if (ptr == NULL) {
        fputs(stderr, "Dynamic memory cannot be allocated.");
        exit(1);
    }

    // FIXME: Memory allocated is not released!

    return 0;
}
