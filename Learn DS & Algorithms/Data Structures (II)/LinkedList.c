#include <stdio.h>
#include <stdlib.h>

// Create a node
struct node {
    int value;
    struct node *next;
};

// Print the linked list value
void printLinkedList(struct node *p) {
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
    }   
}

int main() {
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // Allocate memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // Assign values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Printing node-value
    head = one;
    printLinkedList(head);
}


