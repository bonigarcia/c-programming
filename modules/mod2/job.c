#include <stdio.h>
#include "job.h"

void display_job(Job job) {
    printf("%s is a %s\n", job.person.name, job.role);
}
