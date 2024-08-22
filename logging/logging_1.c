#include <stdio.h>

int divide(int a, int b) {
    printf("Entering divide function with a = %d, b = %d\n", a, b);

    if (b == 0) {
        fputs("Error: Division by zero encountered.", stderr);
        return 0;
    }

    int result = a / b;
    printf("Division successful, result = %d\n", result);

    return result;
}

int main() {
    puts("* * * Program started * * *");

    int x = 10;
    int y = 2;

    printf("Attempting to divide %d by %d\n", x, y);
    int result1 = divide(x, y);
    printf("Result of %d / %d = %d\n", x, y, result1);

    puts("* * * Program ended * * *");

    return 0;
}
