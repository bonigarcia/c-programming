#include <stdio.h>

int main() {
    char character = 'c';
    int integer = 255;
    float float_num = 1.2;
    double double_num = 3.1e33;

    printf("This is a character: %c\n", character);
    printf("This is an integer: %d\n", integer);
    printf("This is a float: %f\n", float_num);
    printf("This is a double: %g\n", double_num);
    printf("This is an integer in hexadecimal: %X\n", integer);

    return 0;
}
