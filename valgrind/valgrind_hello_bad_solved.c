// Compile with debug info:
// gcc -g -o valgrind_hello_bad_solved valgrind_hello_bad_solved.c 

// Test with valgrind:
// valgrind --leak-check=full -v ./valgrind_hello_bad_solved

#include <stdlib.h>

int main() {
    void *ptr = malloc(1);
    free(ptr);

    return 0;
}
