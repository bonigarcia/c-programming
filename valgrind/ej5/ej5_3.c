#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main() {
    int *d;
    float *s;
    char *c;
    d = (int*) malloc(sizeof(int));
    s = (float*) malloc(sizeof(float));
    c = (char*) malloc(6 * sizeof(char));
    *d = 100;
    *s = 34.2;
    strcpy(c, "HELLO");
    printf("%d\t%f\t%s\n", *d, *s, c);
}
