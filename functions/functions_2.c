#include <stdio.h>

int main() {
    int i = 1;
    int j = 2;

    printf("%d + %d = %d\n", i, j, sum(i, j));
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
