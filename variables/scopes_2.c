#include <stdio.h>

int b = 0;

int main() {
    int a = 1;

    if (a > 0) {
        int b = 2;

        printf("a=%d and b=%d\n", a, b);
    }

    printf("a=%d and b=%d\n", a, b);

    return 0;
}
