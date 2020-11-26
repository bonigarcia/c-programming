#include <stdio.h>

void assign_and_print(int *dst, int src) {
    printf("Pointer address is %p\n", dst);
    *dst = src;
    printf("Value is %d\n", *dst);
}

int main(int argc, char *argv[]) {
    int x, *ptr_int;
    x = 8;
    assign_and_print(ptr_int, x);

    return 0;
}
