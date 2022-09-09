#include <stdio.h>

int main() {
    char character = 'c';
    int integer = 256;
    int hexadecimal = 0x3F;
    float float_num = 1.2;
    double double_num = 3.1e33;

    printf("%c\n", character);
    printf("%d\n", integer);
    printf("%x\n", hexadecimal);
    printf("%f\n", float_num);
    printf("%g\n", double_num);

    return 0;
}
