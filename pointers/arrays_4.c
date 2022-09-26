#include <stdio.h>

int main() {
    int array[8];
    int *pointer = array;

    unsigned int s1 = sizeof(array);
    unsigned int s2 = sizeof(pointer);

    printf("s1=%d\n", s1);
    printf("s2=%d\n", s2);

    return 0;
}
