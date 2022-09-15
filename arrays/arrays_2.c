#include <stdio.h>
#define SIZE 4

int main() {
    int array[SIZE] = { 25, 50, 75, 100 };

    for (int i = 0; i < SIZE; i++) {
        printf("The value of the position %d in array is %d\n", i, array[i]);
    }

    return 0;
}
