#include <stdio.h>

int main() {
    int age = 18;
    printf("You age is %d. ", age);
    (age >= 18) ? printf("You can vote.\n") : printf("You cannot vote.\n");

    int canvote = (age >= 18) ? 1 : 0;
    printf("canvote=%d\n", canvote);

    return 0;
}
