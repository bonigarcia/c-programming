#include <stdio.h>

int main() {
    char string[] = "Hello world";

    printf("%s\n", string);
    printf("%p\n", string); // This shows the reference (memory address)

    return 0;
}
