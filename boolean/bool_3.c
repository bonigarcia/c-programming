#include <stdio.h>

typedef enum {false = 0, true} boolean;

int main() {
    boolean t = true;
    boolean f = false;

    if (t) {
        printf("True: %d\n", t);
    }

    if (!f) {
        printf("False: %d\n", f);
    }

    return 0;
}
