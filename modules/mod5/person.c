#include <stdio.h>
#include "person.h"

int sum_ages(Person a, Person b) {
    debug("This is a DEBUG message in the function sum_ages\n");

    return a.age + b.age;
}
