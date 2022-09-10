#include <stdio.h>

int main() {
    typedef unsigned char byte;

    byte a, b, c;

    a = 'd';
    b = 0x65;
    c = 102;

    printf("a=%c a=%d a=%X\n", a, a, a);
    printf("b=%c b=%d b=%X\n", b, b, b);
    printf("c=%c c=%d c=%X\n", c, c, c);

    return 0;
}
