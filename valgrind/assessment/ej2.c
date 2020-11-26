#include <stdlib.h>
#define SIZE 10

int main() { 
   int *x = malloc(SIZE * sizeof(int));
   x[SIZE-1] = 0;

   return 0;
}
