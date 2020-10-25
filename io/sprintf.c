#include <stdio.h>

#define MAX_MSG 80

int main() {
    int n;
    printf("Enter your age: ");
    scanf("%d", &n);

    char str[MAX_MSG];
    sprintf(str, "You are %d years old", n);
    printf("%s\n", str);

    return 0;
}
