#include <stdio.h>
#define SIZE 4

void double_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] *= 2;
    }
}

int main() {
    int array[SIZE] = { 25, 50, 75, 100 };

    double_array(array, SIZE);

    printf("%d\n", array[0]);

    return 0;
}
