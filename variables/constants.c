#include <stdio.h>

#define MAX 64

int main() {
    const int num = 15;
    enum parity {
        ODD = 1, EVEN = 2
    };

    printf("MAX=%d\n", MAX);
    printf("num=%d\n", num);
    printf("EVEN=%d ODD=%d\n", EVEN, ODD);

    return 0;
}
