#ifndef PERSON_H
#define PERSON_H

#define MAX_STR 80

typedef struct Person {
    char name[MAX_STR];
    int age;
} Person;

int sum_ages(Person a, Person b);

#ifdef DEBUG
#define debug(msg) fprintf(stderr, msg)
#else
#define debug(msg)
#endif

#endif
