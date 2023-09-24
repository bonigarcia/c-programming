#include <stdio.h>
#include "job.h"

void display_job(Job job) {
    printf("%s is a %s\n", job.person.name, job.role);

    debug("This is a DEBUG message in the function display_job\n");
}
