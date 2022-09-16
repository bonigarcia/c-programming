#include <stdio.h>

int main() {
    char greetings[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    printf("%s\n", greetings);

    size_t size = sizeof(greetings) / sizeof(char);

    printf("The size of the greetings string is %ld\n", size);

    return 0;
}
