#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i <= size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int main() {
    int numbers[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array contents:\n");
    printArray(numbers, size);

    return 0;
}
