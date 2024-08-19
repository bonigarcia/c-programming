#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *str_1 = "String";
    char *str_2 = strdup(str_1);

    printf("The original \"%s\" has a length of %ld characters\n", str_1,
            strlen(str_1));
    printf("The copied \"%s\" has a length of %ld characters\n", str_2,
            strlen(str_2));

    free(str_2);

    return 0;
}
