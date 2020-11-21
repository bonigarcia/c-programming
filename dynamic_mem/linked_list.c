#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void push(Node **head_ref, int new_data) {
    Node *new_node = (Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void insertAfter(Node *prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("The previous node cannot be NULL\n");
        return;
    }

    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(struct Node **head_ref, int new_data) {
    Node *new_node = (Node*) malloc(sizeof(Node));
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

void printList(Node *node) {
    while (node != NULL) {
        printf(" %d", node->data);
        node = node->next;
    }
    printf("\n");
}

void deleteList(struct Node **head_ref) {
    struct Node *current = *head_ref;
    struct Node *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head_ref = NULL;
}

int main() {
    Node *head = NULL;

    // Insert 6 at the beginning. Linked list becomes: 6->NULL
    append(&head, 6);

    // Insert 7 at the beginning. Linked list becomes: 7->6->NULL
    push(&head, 7);

    // Insert 1 at the beginning. Linked list becomes: 1->7->6->NULL
    push(&head, 1);

    // Insert 4 at the end. Linked list becomes: 1->7->6->4->NULL
    append(&head, 4);

    // Insert 8 after second node. Linked list becomes: 1->7->8->6->4->NULL
    insertAfter(head->next, 8);

    printf("Linked list is:");
    printList(head);

    // Delete list
    deleteList(&head);
    printf("Linked list now is:");
    printList(head);

    return 0;
}
