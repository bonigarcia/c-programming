#include <stdio.h>
#define MAX 80

int main() {
    char buffer[MAX];

    printf("Enter line: ");
    scanf("%[^\n]", buffer);

    printf("You entered: %s\n", buffer);

    return 0;
}
