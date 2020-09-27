#include <stdio.h>

int main() {
    int bufsize = 32;
    char buffer[bufsize];
    char *b = buffer;
    int characters;

    printf("Enter a line: ");
    characters = getline(&b, &bufsize, stdin);
    printf("%d characters were read\n", characters);
    printf("You entered: %s", buffer);

    return 0;
}
