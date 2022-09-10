#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {
    if (TRUE) {
        printf("True: %d\n", TRUE);
    }

    if (!FALSE) {
        printf("False: %d\n", FALSE);
    }

    return 0;
}
