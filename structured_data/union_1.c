#include <stdio.h>

union job {
    float salary;
    int id;
};

int main() {
    union job my_job;

    my_job.salary = 50000.0;

    // when my_job.id is assigned a value,
    // my_job.salary will no longer hold 50000.0

    my_job.id = 55;

    printf("Worker id = %d\n", my_job.id);
    printf("Salary = %.1f\n", my_job.salary);

    return 0;
}
