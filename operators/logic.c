#include <stdio.h>

int main() {
    int a = 0;
    int b = 10;

    printf("%d > %d : %d\n", a, b, a > b);
    printf("%d < %d : %d\n", a, b, a < b);
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);

    return 0;
}
