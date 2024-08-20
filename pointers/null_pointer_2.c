#include <stdio.h>

int main() {
    int *null_pointer = NULL;
    char *my_string = "Hello";

    printf("The address of null_pointer is %p\n", null_pointer);
    printf("The address of my_string is %p\n", my_string);

    return 0;
}
