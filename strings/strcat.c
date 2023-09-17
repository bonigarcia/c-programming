#include <stdio.h>
#include <string.h>

#define MAX_STR 256

int main() {
    char str1[MAX_STR] = "Hello ";
    char *str2 = "world";

    printf("%s\n", str1);
    printf("%s\n", str2);

    // It concatenates str1 and str2, and
    // the resultant string is stored in str1
    strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}
