#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 80

int main() {
    char ch;
    char buffer[MAX];

    for (;;) { // Infinite loop
        printf("Insert character (q to exit): ");

        fgets(buffer, MAX, stdin); // Read a complete line from the user
        buffer[strlen(buffer) - 1] = 0; // Remove trailing carriage return
        ch = buffer[0]; // Get only the first character of the input

        if (tolower(ch) == 'q' && strlen(buffer) == 1) {
            printf("Goodbye!\n");
            break;
        }

        printf("\tYou entered: %s\n", buffer);
    }

    return 0;
}
