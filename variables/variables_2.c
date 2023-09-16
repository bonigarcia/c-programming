#include <stdio.h>

/*
 These are global variables
 (multi-line comment)
 */
int a = 1;
int b;

int main() {
    int c, d = 2; // local variables
    char e;

    e = 'z'; // assignments
    b = 7;
    c = 5;

    printf("a=%d b=%d c=%d d=%d e=%c\n", a, b, c, d, e);

    return 0;
}
