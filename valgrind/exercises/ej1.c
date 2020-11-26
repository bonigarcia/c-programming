#include <stdlib.h>

struct node {
    int a;
    struct node *p;
}

void main() {
    struct node *k;
    k = (struct node*) malloc(sizeof(struct node));
    k->a = 100;
    k->p = NULL;
    printf("The value of a is %d", k->a);
}
