#include <stdio.h>
#include "person.h"
#include "job.h"

int main() {
    Person alice = { "Alice", 25 };
    Person bob = { "Bob", 32 };

    Job developer = { alice, "developer" };
    Job tester = { bob, "tester" };

    display_job(developer);
    display_job(tester);

    printf("The sum of the ages of %s and %s is %d\n", alice.name, bob.name,
            sum_ages(alice, bob));

    return 0;
}
