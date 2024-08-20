#include <stdio.h>
#include <stdlib.h>

struct cell {
    int a;
    int b;
};

int main() {
    struct cell *ptr = (struct cell*) malloc(sizeof(struct cell));

    ptr->a = 10;
    ptr->b = 20;

    printf("The address %p contains %d and then %d\n",
            ptr, ptr->a, ptr->b);

    free(ptr);
}
