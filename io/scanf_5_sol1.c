#include <stdio.h>
#include <ctype.h>
#define MAX 80

int main() {
    char ch;
    char buffer[MAX];

    for (;;) { // Infinite loop
        printf("Insert character (q to exit): ");
        fgets(buffer, MAX, stdin);
        ch = buffer[0];

        if (tolower(ch) == 'q') {
            printf("Goodbye!\n");
            break;
        }

        printf("\tYou entered: %c\n", ch);
    }

    return 0;
}
