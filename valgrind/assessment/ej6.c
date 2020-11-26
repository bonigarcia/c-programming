#include <stdio.h>
#include <stdlib.h>

#define SIZE 2

void f(int *number) {
    int *numbers = (int*) realloc(number, SIZE * sizeof(int));
    numbers[0] = 64;
    numbers[1] = 65;
    free(numbers);
}

int main(void) {
    int *aux = (int*) malloc(sizeof(int));
    f(aux);
    free(aux);

    return 0;
}
