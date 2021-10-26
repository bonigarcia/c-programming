#include <stdlib.h>
#include <stdio.h>

struct node {
    int a;
    struct node *p;
} *head;

void main() {
    head = (struct node*) calloc(1, sizeof(struct node));
    head->a = 100;
    printf("%d\n", head->a);
}
