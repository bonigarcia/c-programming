#include <stdio.h>
#define SIZE 4

int main() {
    int array[SIZE];

    array[0] = 25;
    array[1] = 50;
    array[2] = 75;
    array[3] = 100;

    printf("The value of the position 0 in array is %d\n", array[0]);
    printf("The value of the position 1 in array is %d\n", array[1]);
    printf("The value of the position 2 in array is %d\n", array[2]);
    printf("The value of the position 3 in array is %d\n", array[3]);

    return 0;
}
