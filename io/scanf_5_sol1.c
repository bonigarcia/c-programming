#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_STR 80

int main() {
    char ch;
    char input[MAX_STR];

    for (;;) { // Infinite loop
        printf("Insert character (q to exit): ");

        fgets(input, MAX_STR, stdin); // Read a complete line from the user
        input[strlen(input) - 1] = '\0'; // Remove trailing carriage return

        printf("\tYou entered: %s (%ld characters)\n", input, strlen(input));

        ch = input[0]; // Get only the first character of the input
        if (tolower(ch) == 'q' && strlen(input) == 1) {
            puts("Goodbye!");
            break;
        }

    }

    return 0;
}
