#include <stdio.h>
#include <stdlib.h>

int main() {
    char *p;
    // Allocation #1 of 19 bytes
    p = (char*) malloc(13);

    // Allocation #2 of 12 bytes
    p = (char*) malloc(11);
    free(p);

    // Allocation #3 of 16 bytes
    p = (char*) malloc(16);

    return 0;
}
