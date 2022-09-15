#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";

    // strcmp returns 0 when both string are equal
    int comparison = strcmp(str1, str2);

    // 0 is evaluated as false in a conditional
    if (comparison != 0) { // if (comparison) {
        printf("\"%s\" and \"%s\" are DIFFERENT (comparison=%d)\n", str1, str2,
                comparison);
    }

    comparison = strcmp(str1, str3);

    if (comparison == 0) { // if (!comparison) {
        printf("\"%s\" and \"%s\" are IDENTICAL (comparison=%d)\n", str1, str3,
                comparison);
    }

    return 0;
}
