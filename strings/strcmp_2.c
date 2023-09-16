#include <stdio.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hello";

    if (str1 == str2) { // FIXME
        printf("\"%s\" and \"%s\" are EQUAL\n", str1, str2);
    }

    return 0;
}
