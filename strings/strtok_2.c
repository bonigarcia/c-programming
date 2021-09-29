#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SEPARATOR "/"

int main() {
    char str[80] = "50/70";
    char *token = strtok(str, SEPARATOR);

    while (token != NULL) {
        printf("%d\n", atoi(token));
        token = strtok(NULL, SEPARATOR);
    }
    return 0;
}
