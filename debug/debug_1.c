#include <stdio.h>

int main() {
    printf("Hello world\n");

#ifdef DEBUG
    fprintf(stderr, "This is a debug message\n");
#endif

    return 0;
}
