#include <stdio.h>
#define SIZE 4

void display_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("array[%d]=%d\n", i, array[i]);
    }
    printf("\n");
}

void double_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] *= 2;
    }
}

int main() {
    int array[SIZE] = { 25, 50, 75, 100 };

    display_array(array, SIZE);

    double_array(array, SIZE);

    display_array(array, SIZE);

    return 0;
}
