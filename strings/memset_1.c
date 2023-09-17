#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello world";
    printf("%s\n", str);

    // Fill 5 characters with '?' starting from the beginning
    memset(str, '?', 5 * sizeof(char));
    printf("%s\n", str);
    return 0;
}
