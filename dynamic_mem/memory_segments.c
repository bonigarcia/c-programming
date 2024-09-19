#include <stdio.h>

int global1 = 10; // Initialized global variable (data)

int global2; // Uninitialized global variable (BSS)

int main() {
    const int number = 5; // Constant variable (rodata)

    static int min; // Uninitialized static variable (BSS)

    static int max = 20; // Initialized static variable (data)

    char *msg1 = "Hello world"; // Immutable string literal (rodata)

    char msg2[] = "Hello world"; // Mutable string literal (stack)

    msg2[0] = 'h';

    printf("%s\n", msg2);

    return 0;
}
