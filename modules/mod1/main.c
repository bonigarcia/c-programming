#include <stdio.h>
#include "person.h"

int main() {
    Person alice = { "Alice", 25 };
    Person bob = { "Bob", 32 };

    printf("Alice and Bob has %d years together\n", sum_ages(alice, bob));
    return 0;
}
