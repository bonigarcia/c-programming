#include <stdio.h>

int main() {
    int i;

    for (;;) { // Infinite loop
        printf("Enter an option from 1 to 7 (8 for exit): ");
        scanf("%i", &i);

        if (i > 0 && i < 8) {
            printf("You entered %d\n", i);
        } else if (i == 8) {
            puts("Goodbye!");
            break;
        } else {
            puts("Wrong option");
        }
    }

    return 0;
}
