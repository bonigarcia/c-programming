#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";
    size_t str_length = strlen(str);
    size_t str_size = sizeof(str) / sizeof(char);

    printf("The string \"%s\" has a length of %ld characters\n", str,
            str_length);
    printf("The string \"%s\" is stored in an array of %ld positions\n", str,
            str_size);
    return 0;
}
