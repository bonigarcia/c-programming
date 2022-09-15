#include <stdio.h>

int main() {
    int array[] = { 25, 50, 75, 100 };
    size_t size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        printf("The value of the position %i in array is %d\n", i, array[i]);
    }

    return 0;
}
