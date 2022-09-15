#include <stdio.h>
#include <string.h>

#define SIZE 80

int main() {
    char greetings[SIZE];
    strcpy(greetings, "Hello");

    printf("%s\n", greetings);

    return 0;
}
