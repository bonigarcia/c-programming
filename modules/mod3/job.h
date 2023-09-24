#ifndef JOB_H
#define JOB_H

#include "person.h"

#define MAX_JOBS 50

typedef struct Job {
    Person person;
    char role[MAX_STR];
} Job;

void display_job(Job job);

void display_job_by_index(int i);

#endif
