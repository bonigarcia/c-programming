#include <stdlib.h>

#define SIZE 10

int main() {
    char *x = malloc(SIZE * sizeof(char));
    x[SIZE] = '\0';
    free(x);

    return 0;
}
