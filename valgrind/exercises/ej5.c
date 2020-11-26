#include <stdlib.h>

struct node {
    int a;
    struct node *p;
} *head;

void main() {
    head = (struct node*) calloc(sizeof(struct node));
    head->a = 100;
    printf("%d ", head->a);
}
