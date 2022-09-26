#include <stdio.h>

void swap(int *p_first, int *p_second) {
    int tmp;

    tmp = *p_first;
    *p_first = *p_second;
    *p_second = tmp;
}

int main() {
    int a = 100;
    int b = 200;

    puts("Before swap:");
    printf("\t a=%d \n", a);
    printf("\t b=%d \n", b);

    int *p_a = &a;
    int *p_b = &b;
    swap(p_a, p_b);

    puts("After swap:");
    printf("\t a=%d \n", a);
    printf("\t b=%d \n", b);

    return 0;
}
