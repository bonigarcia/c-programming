#include <stdio.h>
#define MAX 80

int main() {
    char str[MAX];
    printf("Enter a string: ");
    gets(str);

    printf("You entered: ");
    puts(str);

    return 0;
}
