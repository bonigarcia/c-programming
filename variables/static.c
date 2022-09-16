#include <stdio.h>

void my_function() {
    int regular_int = 0;
    static int static_int = 0;

    regular_int++;
    static_int++;

    printf("regular_int = %d, static_int = %d\n", regular_int, static_int);
}

int main() {
    for (int i = 0; i < 10; i++) {
        my_function();
    }
}
