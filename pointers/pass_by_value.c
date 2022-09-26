#include <stdio.h>

void swap(int first, int second) {
    int tmp;

    tmp = first;
    first = second;
    second = tmp;
}

int main() {
    int a = 100;
    int b = 200;

    puts("Before swap:");
    printf("\t a=%d \n", a);
    printf("\t b=%d \n", b);

    swap(a, b);

    puts("After swap:");
    printf("\t a=%d \n", a);
    printf("\t b=%d \n", b);

    return 0;
}
