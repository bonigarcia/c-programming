#include <stdio.h>
#include <stdbool.h>

int main() {
    bool t = true;
    bool f = false;

    if (t) {
        printf("True: %d\n", t);
    }

    if (!f) {
        printf("False: %d\n", f);
    }

    return 0;
}
