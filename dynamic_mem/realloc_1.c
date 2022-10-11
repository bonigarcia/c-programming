#include <stdio.h>
#include <stdlib.h>

#define SIZE_1 5
#define SIZE_2 10

void fill_array(int *array, int init, int end) {
    for (int i = init; i < end; i++) {
        array[i] = i;
    }
}

void display_array(int *array, int init, int end) {
    for (int i = init; i < end; i++) {
        printf("array[%d]=%d\n", i, array[i]);
    }
    printf("\n");
}

int main() {
    int *ptr = (int*) calloc(SIZE_1, sizeof(int));

    fill_array(ptr, 0, SIZE_1);
    display_array(ptr, 0, SIZE_1);

    ptr = (int*) realloc(ptr, SIZE_2 * sizeof(int));

    fill_array(ptr, SIZE_1, SIZE_2);
    display_array(ptr, SIZE_1, SIZE_2);

    free(ptr);

    return 0;
}
