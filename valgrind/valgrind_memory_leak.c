// Compile with debug info:
// gcc -g -o valgrind_memory_leak valgrind_memory_leak.c

// Test with valgrind:
// valgrind --leak-check=full ./valgrind_memory_leak

#include <stdlib.h>
#include <stdio.h>

void leak() {
    void *ptr = malloc(100);
}

int main() {
    puts("Let's leak 100 bytes");
    leak();
    puts("100 bytes leaked");

    return 0;
}
