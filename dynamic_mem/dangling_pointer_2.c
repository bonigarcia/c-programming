#include <stdio.h>

int* dangling() {
    int temp = 10;
    return &temp;
}

int main() {
    int *ptr = dangling();
    printf("*ptr=%d\n", *ptr);
    return 0;
}
