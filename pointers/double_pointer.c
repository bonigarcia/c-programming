#include <stdio.h>

int main() {
    int age = 20;
    int *pointer = &age;
    int **double_pointer = &pointer;

    printf("The value of the variable age is %d\n", age);
    printf("The value pointed by *pointer is %d\n", *pointer);
    printf("The value pointed by **double_pointer is %d\n", **double_pointer);

    return 0;
}
