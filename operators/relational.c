#include <stdio.h>

int main() {
    int a = 0;
    int b = 10;

    if (a && b) {
        printf("First condition is true\n");
    } else {
        printf("First condition is not true\n");
    }

    if (a || b) {
        printf("Second condition is true\n");
    }

    if (!a) {
        printf("Third condition is true\n");
    }

    return 0;
}
