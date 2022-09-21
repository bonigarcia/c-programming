#include <stdio.h>

int main() {
    int bufsize = 80;
    char buffer[bufsize];

    printf("Enter line: ");
    fgets(buffer, bufsize, stdin);

    printf("You entered: %s\n", buffer);

    return 0;
}
