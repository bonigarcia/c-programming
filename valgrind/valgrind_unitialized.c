// Compile with debug info:
// gcc -g -o valgrind_unitialized valgrind_unitialized.c

// Test with valgrind:
// valgrind --track-origins=yes ./valgrind_unitialized

#include <stdlib.h>
#include <stdio.h>

int main() {
    int number;
    if (number == 0) {
        printf("number is zero");
    }

    return 0;
}
