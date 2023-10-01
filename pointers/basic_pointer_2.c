#include <stdio.h>

int main() {
    int age = 20;
    int *p_age = &age;

    printf("The value of the variable age is %d\n", age);
    printf("The memory address in which age is stored is %p\n", p_age);
    printf("The value pointed by p_age is %d\n", *p_age);

    age = 40;

    printf("The value of the variable age is %d\n", age);
    printf("The value pointed by p_age is %d\n", *p_age);

    return 0;
}
