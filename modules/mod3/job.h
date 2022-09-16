#ifndef JOB_H
#define JOB_H

#include "people.h"

#define MAX_JOBS 50

typedef struct Job {
    Person person;
    char role[MAX_STR];
} Job;

Job company[MAX_JOBS];

void display_job(Job job);

void display_job_by_index(int i);

#endif