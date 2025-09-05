#include <stdio.h>
#define MAX 22

int main() {
    int n;
    printf("Enter your age: ");
    scanf("%d", &n);

    char str[MAX];
    // snprintf writes formatted output to a string with a specified buffer size
    // preventing buffer overflows
    snprintf(str, sizeof(str), "You are %d years old", n);
    puts(str);

    return 0;
}
