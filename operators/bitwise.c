#include <stdio.h>
#include <limits.h>

void print_bin(unsigned char byte) {
    int i = CHAR_BIT; // Number of bits in a byte, i.e., 8
    while (i--) {
        putchar('0' + ((byte >> i) & 1));
    }
}

int main() {
    int a = 201, b = 11;

    printf("a\t");
    print_bin(a);
    printf("\n");

    printf("b\t");
    print_bin(b);
    printf("\n");

    printf("a&b\t");
    print_bin(a & b);
    printf("\n");

    printf("a|b\t");
    print_bin(a | b);
    printf("\n");

    printf("~a\t");
    print_bin(~a);
    printf("\n");

    printf("~b\t");
    print_bin(~b);
    printf("\n");

    printf("a<<1\t");
    print_bin(a << 1);
    printf("\n");

    printf("a>>1\t");
    print_bin(a >> 1);
    printf("\n");

    return 0;
}
