#include <stdio.h>
#include <string.h>

#define SEPARATOR " "

int main() {
    char str[80] = "Hello world";
    char *token = strtok(str, SEPARATOR);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, SEPARATOR);
    }
    return 0;
}
