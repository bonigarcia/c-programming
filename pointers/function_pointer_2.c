#include <stdio.h>
#include <stdlib.h>

#define MAX 80

double add(int a, int b) {
    return (double) a + b;
}

double subtract(int a, int b) {
    return (double) a - b;
}

double multiply(int a, int b) {
    return (double) a * b;
}

double divide(int a, int b) {
    if (b != 0) {
        return (double) a / b;
    } else {
        return 0;
    }
}

int get_number_from_stdin() {
    char buffer[MAX];
    fgets(buffer, MAX, stdin);
    return atoi(buffer);
}

int main() {
    int option;

    do {
        // Print a menu
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n\n");
        printf("Enter an option: ");

        option = get_number_from_stdin();

        if (option >= 1 && option <= 4) {
            // ask for two additional numbers
            int x, y;

            printf("Enter first operator: ");
            x = get_number_from_stdin();

            printf("Enter second operator: ");
            y = get_number_from_stdin();

            double (*operation)(int, int); // Function pointer

            switch (option) {
            case 1: // addition
                operation = add;
                break;
            case 2: // subtraction
                operation = subtract;
                break;
            case 3: // multiplication
                operation = multiply;
                break;
            case 4: // division
                operation = divide;
                break;
            }

            double result = operation(x, y);
            printf("\nThe result is %.2f\n\n", result);
        }

    } while (option != 5);

    return 0;
}
