#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";
    int str_length = strlen(str);
    int str_size = sizeof(str) / sizeof(char);

    // The last position of a string in C is the null-terminated character: '\0'
    printf("The string \"%s\" has a length of %d characters\n", str,
            str_length);
    printf("The string \"%s\" is stored in an array of %d positions\n", str,
            str_size);
    return 0;
}
