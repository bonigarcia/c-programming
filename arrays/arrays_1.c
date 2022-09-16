#include <stdio.h>

int main() {
    int array_1[10];
    array_1[0] = 100;
    printf("The value of the position 0 in array_1 is %d\n", array_1[0]);

    int array_2[] = { 25, 50, 75, 100 };
    printf("The value of the position 0 in array_2 is %d\n", array_2[0]);

    return 0;
}
