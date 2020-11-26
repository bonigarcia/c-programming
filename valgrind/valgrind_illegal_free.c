// Compile with debug info:
// gcc -g -o valgrind_illegal_free valgrind_illegal_free.c

// Test with valgrind:
// valgrind --leak-check=full --track-origins=yes -v ./valgrind_illegal_free

#include <stdlib.h>
#include <stdio.h>

int main() {
   void *ptr = malloc(4);
   free(ptr);
   ptr++; // To mismatch
   free(ptr);

   return 0;
}
