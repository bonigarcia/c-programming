#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    for (;;) { // Infinite loop
        printf("Insert character (q to exit): ");
        scanf("%c", &ch); // equivalent to: ch = getchar();

        if (tolower(ch) == 'q') {
            printf("Goodbye!\n");
            break;
        }

        printf("\tYou entered: %c\n", ch);
    }

    return 0;
}
