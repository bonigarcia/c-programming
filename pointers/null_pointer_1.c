#include <stdio.h>

int main() {
    int *pointer = NULL;

    /*
     This equivalent to:
     if (pointer == 0)
     if (!pointer)
     */
    if (pointer == NULL) {
        printf("Pointer is NULL\n");
    }

    return 0;
}
