#include <stdlib.h>

void main() {
    int *d;
    float *s;
    char *c;
    c = (int*) malloc(6 * sizeof(char));
    d = (int*) malloc(sizeof(int));
    s = (int*) malloc(sizeof(float));
    *d = 100;
    *s = 34.2;
    *c = "HELLO"
    printf("%d\t%f\t%s", *d, *s, c);
}
