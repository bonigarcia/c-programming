#include <stdio.h>

int main() {
    char str[40];
    int i;

    printf("Enter a string and an integer:");
    scanf("%s %d", str, &i);

    printf("You entered: %s %d ", str, i);

    return 0;
}
