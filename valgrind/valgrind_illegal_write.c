// Compile with debug info:
// gcc -g -o valgrind_illegal_write valgrind_illegal_write.c 

// Test with valgrind:
// valgrind --leak-check=full -v ./valgrind_illegal_write

#include <stdlib.h>

int main() {
   int *ptr = 0;
   *ptr = 33;

   return 0;
}
