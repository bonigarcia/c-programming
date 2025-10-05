#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *greetings = strdup("Hello");
    printf("%s\n", greetings);

    free(greetings);

    return 0;
}
