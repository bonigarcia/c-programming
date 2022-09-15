#include <stdio.h>
#include "people.h"
#include "job.h"

int main() {
    Person alice = { "Alice", 25 };
    Person bob = { "Bob", 32 };

    Job developer = { alice, "developer" };
    Job tester = { bob, "tester" };

    display_job(developer);
    display_job(tester);

    return 0;
}
