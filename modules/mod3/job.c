#include <stdio.h>
#include "job.h"

extern Job company[];

void display_job(Job job) {
    printf("%s is a %s\n", job.person.name, job.role);
}

void display_job_by_index(int i) {
    display_job(company[i]);
}
