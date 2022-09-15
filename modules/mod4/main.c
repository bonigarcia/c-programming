#include <stdio.h>
#include "people.h"
#include "job.h"

Job company[MAX_JOBS];

int main() {
    Person alice = { "Alice", 25 };
    Person bob = { "Bob", 32 };

    Job developer = { alice, "developer" };
    Job tester = { bob, "tester" };

    company[0] = developer;
    company[1] = tester;

    display_job_by_index(0);
    display_job_by_index(1);

    return 0;
}
