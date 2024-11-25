#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}node;
node* head = NULL;
node* createNode(int value) {
    node* newNode = (node*) malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;

    node* current = head;
    if (current == NULL) {
        head = newNode;
    }
    else {
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
    return newNode;
}



