#include <stdio.h>
#include <stdlib.h>

// Comparison function for integers
int compare(const void *a, const void *b) {
    return (*(int*) a - *(int*) b);
}

void display_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    // Array of integers to be sorted
    int array[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5 };
    int size = sizeof(array) / sizeof(array[0]);

    // Print the original array
    printf("Original array:\t");
    display_array(array, size);

    // Sort the array using qsort
    qsort(array, size, sizeof(int), compare);

    // Print the sorted array
    printf("Sorted array:\t");
    display_array(array, size);

    return 0;
}
