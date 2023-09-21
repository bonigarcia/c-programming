#include <stdio.h>
#define MAX 80

int main() {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    printf("You entered: ");
    puts(str);

    return 0;
}
