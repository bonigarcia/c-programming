#include <stdio.h>

int main() {
    int bufsize = 80;
    char buffer[bufsize];

    printf("Enter line: ");
    scanf("%[^\n]", buffer);

    printf("You entered: %s\n", buffer);

    return 0;
}
