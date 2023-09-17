#include <stdio.h>
#include <string.h>

#define SEPARATOR " "

/*
 References:
 https://cplusplus.com/reference/cstring/strtok/
 https://stackoverflow.com/questions/23456374/why-do-we-use-null-in-strtok
 */
int main() {
    char str[80] = "Hello world";
    char *token = strtok(str, SEPARATOR);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, SEPARATOR);
    }
    return 0;
}

