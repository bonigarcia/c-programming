#include <stdio.h>

int main() {
    char character = 'c';
    int integer = 255;
    float float_num = 1.2;
    double double_num = 3.1e33;

    printf("The size of a CHAR is %ld bytes\n", sizeof(character));
    printf("The size of a INT is %ld bytes\n", sizeof(integer));
    printf("The size of a FLOAT is %ld bytes\n", sizeof(float_num));
    printf("The size of a DOUBLE is %ld bytes\n", sizeof(double_num));

    return 0;
}
