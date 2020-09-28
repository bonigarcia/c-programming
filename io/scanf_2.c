#include <stdio.h>

int main() {
    int i, res;

    printf("Enter an integer: ");
    res = scanf("%d", &i);

    if (res == EOF) {
        printf("You sent EOF");
    } else {
        printf("You entered: %d", i);
    }

    return 0;
}
