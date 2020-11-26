#include <stdlib.h>

struct node {
    int a;
    struct node *p;
}

struct node* create(int i) {
    struct node *k;
    k = (struct node*) malloc(sizeof(struct node));
    k->a = i;
    k->p = NULL;
}

void main() {
    k = create(10);
    printf("%d ", k->a);
}
