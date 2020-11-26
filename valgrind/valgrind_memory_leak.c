// Compile with debug info:
// gcc -g -o valgrind_memory_leak valgrind_memory_leak.c

// Test with valgrind:
// valgrind --leak-check=full --track-origins=yes -v ./valgrind_memory_leak

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void leak() {
    void *ptr = malloc(100);
}

int main() {
    printf("#Let's leak 100 bytes");
    leak();
    printf("#100 bytes leaked");

    return 0;
}

