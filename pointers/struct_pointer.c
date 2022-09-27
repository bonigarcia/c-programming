#include <stdio.h>

#define MAX_STR 80

typedef struct Person {
    char name[MAX_STR];
    int age;
} Person;

int main() {
    Person person = { "Alice", 25 };
    Person *pointer = &person;

    printf("Name: %s -- Age: %d\n", (*pointer).name, (*pointer).age);
    printf("Name: %s -- Age: %d\n", pointer->name, pointer->age);

    return 0;
}
