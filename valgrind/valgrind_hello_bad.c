// Compile with debug info:
// gcc -g -o valgrind_hello_bad valgrind_hello_bad.c 

// Test with valgrind:
// valgrind --tool=memcheck --leak-check=full -v ./valgrind_hello_bad
// ... which is the same as (since memcheck is the default tool used by valgrind):
// valgrind --leak-check=full -v ./valgrind_hello_bad

#include <stdlib.h>

int main() {
  void* ptr = malloc(1);

  return 0;
}
