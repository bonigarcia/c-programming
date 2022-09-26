#include <stdio.h>
#include <string.h>
#define SIZE 4

void display_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("array[%d]=%d\n", i, array[i]);
    }
    printf("\n");
}

int main() {
    int array_1[SIZE] = { 25, 50, 75, 100 };
    int array_2[SIZE];

    memcpy(array_2, array_1, sizeof(array_1));

    display_array(array_1, SIZE);
    display_array(array_2, SIZE);

    return 0;
}
