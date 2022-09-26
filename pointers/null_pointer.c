#include <stdio.h>

int main() {
    int *pointer = NULL;

    /*
     This equivalent to:
     if (pointer == NULL)
     if (pointer == 0)
     */
    if (!pointer) {
        printf("Pointer is NULL\n");
    }

    return 0;
}
