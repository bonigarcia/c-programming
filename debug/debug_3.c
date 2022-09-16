#include <stdio.h>

#ifdef DEBUG
#define debug(msg, ...) fprintf(stderr, msg, ##__VA_ARGS__)
#else
#define debug(msg, ...)
#endif

int main() {
    printf("Hello world\n");
    debug("This is a debug message\n");

    int i = 10;
    debug("This is a debug message with a formatted value: %d\n", i);
    return 0;
}
