#include <stdio.h>
#define MAX 80

int main() {
    char str[MAX];
    size_t bufsize = MAX;
    char *buffer = str;

    printf("Enter a string: ");
    getline(&buffer, &bufsize, stdin);

    printf("You entered: ");
    puts(str);

    return 0;
}
