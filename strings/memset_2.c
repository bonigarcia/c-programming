#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello world";
    printf("%s\n", str);

    // Fill 5 characters with '?' starting from character 6
    memset(str + 6, '?', 5 * sizeof(char));
    printf("%s\n", str);
    return 0;
}
