#include <stdio.h>
#define MAX 80

int main() {
    int n;
    printf("Enter your age: ");
    scanf("%d", &n);

    char str[MAX];
    sprintf(str, "You are %d years old", n);
    puts(str);

    return 0;
}
