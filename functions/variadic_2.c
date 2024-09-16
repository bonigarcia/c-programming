#include <stdarg.h>
#include <stdio.h>

// ISO C requires a named argument before '...'
int sum(int n, ...) {
    int sum = 0;
    va_list ptr;
    va_start(ptr, n);

    for (int i = 0; i < n; i++) {
        sum += va_arg(ptr, int);
    }

    va_end(ptr);

    return sum;
}

int main() {
    printf("Variadic functions:\n");
    printf("1 + 2 = %d\n", sum(2, 1, 2));
    printf("3 + 4 + 5 = %d\n", sum(3, 3, 4, 5));
    printf("6 + 7 + 8 + 9 = %d\n", sum(4, 6, 7, 8, 9));

    return 0;
}
