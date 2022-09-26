#include <stdio.h>
#define SIZE 4

int main() {
    int array_1[SIZE] = { 25, 50, 75, 100 };
    int array_2[SIZE];

    array_2 = array_1; // forbidden

    return 0;
}
