#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    char buffer[80];

    for (;;) { // Infinite loop
        printf("Insert character (q to exit): ");
        scanf("%s", buffer);
        ch = buffer[0];

        if (tolower(ch) == 'q') {
            printf("Goodbye!\n");
            break;
        }

        printf("\tYou entered: %c\n", ch);
    }

    return 0;
}
