#include <stdio.h>

#ifdef DEBUG
#define debug(msg) fprintf(stderr, msg)
#else
#define debug(msg)
#endif

int main() {
    printf("Hello world\n");
    debug("This is a debug message\n");
    return 0;
}
