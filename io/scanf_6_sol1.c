#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int bufsize = 80;
    char buffer[bufsize];

    for (;;) { // Infinite loop
        printf("Enter an option from 1 to 7 (8 for exit): ");
        fgets(buffer, bufsize, stdin);
        i = atoi(buffer);

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
