#include <stdio.h>

int main() {
    int array_1[5]; // declaration
    array_1[0] = 100;
    array_1[1] = 200;
    printf("The value of the position 0 in array_1 is %d\n", array_1[0]);
    printf("The value of the position 1 in array_1 is %d\n", array_1[1]);

    int array_2[] = { 25, 50, 75, 100 }; // initialization
    printf("The value of the position 0 in array_2 is %d\n", array_2[0]);
    printf("The value of the position 3 in array_2 is %d\n", array_2[3]);

    return 0;
}
