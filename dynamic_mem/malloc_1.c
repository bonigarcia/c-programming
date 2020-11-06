#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // malloc stands for memory allocation
    ptr = (int*) malloc(n * sizeof(int));

    // if memory cannot be allocated
    if (ptr == NULL) {
        printf("Error! memory not allocated.\n");
        exit(0);
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", ptr + i);

        sum += *(ptr + i);
    }

    printf("Sum = %d\n", sum);

    // deallocating the memory
    free(ptr);

    return 0;
}
