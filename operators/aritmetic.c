#include <stdio.h>

int main() {
    int sum = 1 + 1;
    int subtraction = 2 - 2;
    int multiplication = 3 * 4;
    float division = 5.0 / 4.0;
    int module = 5 % 3;

    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", subtraction);
    printf("Multiplication: %d\n", multiplication);
    printf("Division: %f\n", division);
    printf("Module: %d\n", module);
    printf("Increment: %d\n", ++sum);
    printf("Decrement: %d\n", --sum);

    return 0;
}
