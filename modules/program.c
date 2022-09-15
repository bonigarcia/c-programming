#include <stdio.h>

#define MAX_STR 80

typedef struct Person {
    char name[MAX_STR];
    int age;
} Person;

int sum_ages(Person a, Person b);

int main() {
    Person alice = { "Alice", 25 };
    Person bob = { "Bob", 32 };

    printf("Alice and Bob has %d years together\n", sum_ages(alice, bob));
    return 0;
}

int sum_ages(Person a, Person b) {
    return a.age + b.age;
}
