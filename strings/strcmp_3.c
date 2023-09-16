#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hello";

    // strcmp returns 0 when both strings are equal
    if (strcmp(str1, str2) == 0) {
        printf("\"%s\" and \"%s\" are EQUAL\n", str1, str2);
    }

    return 0;
}
