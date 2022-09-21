#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int bufsize = 80;
    char buffer[bufsize];

    for (;;) { // Infinite loop
        printf("Insert character (q to exit): ");
        fgets(buffer, bufsize, stdin);
        ch = buffer[0];

        if (tolower(ch) == 'q') {
            printf("Goodbye!\n");
            break;
        }

        printf("\tYou entered: %c\n", ch);
    }

    return 0;
}
