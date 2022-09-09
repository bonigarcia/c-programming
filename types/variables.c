#include <stdio.h>
#define MAX 64

/*
 These are global variables
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
    printf("MAX=%d\n", MAX);

    return 0;
}
