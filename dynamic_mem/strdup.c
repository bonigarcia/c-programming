#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char original[] = "Hello world";
    char *copy = strdup(original);

    if (copy == NULL) {
        fputs("Memory allocation failed\n", stderr);
        exit(1);
    }

    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);

    free(copy);  // important to release dynamic memory

    return 0;
}
