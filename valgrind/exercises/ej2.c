#include <stdlib.h>

void main() {
    int *a;
    a = malloc(sizeof(int), 2);
    *a = 100;
    printf("The value of a is %d", *a);
}

