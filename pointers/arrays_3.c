#include <stdio.h>

int main() {
    int array[] = { 25, 50, 75, 100 };

    int *a = array;     // initial address
    int *b = array + 1; // initial address + (sizeof(int) * 1)
    int *c = array + 2; // initial address + (sizeof(int) * 2)
    int *d = array + 3; // initial address + (sizeof(int) * 3)

    printf("*a=%d\n", *a);
    printf("*b=%d\n", *b);
    printf("*c=%d\n", *c);
    printf("*d=%d\n", *d);

    return 0;
}
