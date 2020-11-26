// Compile with debug info:
// gcc -g -o valgrind_unitialized valgrind_unitialized.c 

// Test with valgrind:
// valgrind --leak-check=full --track-origins=yes -v ./valgrind_unitialized

#include <stdlib.h>
#include <stdio.h>

int main() {
    int number; // Should be initialized (e.g. to zero)
    if (number == 0) {
        printf("number is zero");
    }

    return 0;
}
