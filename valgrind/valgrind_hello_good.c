// Compile with debug info:
// gcc -g -o valgrind_hello_good valgrind_hello_good.c 

// Test with valgrind:
// valgrind --leak-check=full -v ./valgrind_hello_good

#include <stdlib.h>

int main() {
   return 0;
}
