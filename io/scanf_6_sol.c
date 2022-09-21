#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    char buffer[80];

    for (;;) { // Infinite loop
        printf("Enter an option from 1 to 7 (8 for exit): ");
        scanf("%s", buffer);
        i = atoi(buffer);

        if (i > 0 && i < 8) {
            printf("You entered %d\n", i);
        } else if (i == 8) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Wrong option\n");
        }
    }

    return 0;
}
