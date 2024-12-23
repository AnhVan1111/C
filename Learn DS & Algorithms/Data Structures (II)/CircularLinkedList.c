#include <stdio.h>
#include <stdlib.h>

// Circular Linked List
struct Node {
    int data;
    struct Node* next;
};

struct Node* addToEmpty(struct Node* last, int data) {
    if (last != NULL) {
        return last;
    }
    
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = data;

    last = newNode;

    last->next = last;

    return last;
}

// Add node to the front
struct Node* addFront(struct Node* last, int data) {
    // check if the list is empty
    if (last == NULL) {
        return addToEmpty(last, data);
    }

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = data;

    newNode->next = last->next;
    
    last->next = newNode;

    return last;
}

// Add node to the end
struct Node* addEnd(struct Node* last, int data) {
    // check if the node is empty
    if (last == NULL) {
        return addToEmpty(last, data);
    }

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = data;

    newNode->next = last->next;

    last->next = newNode;

    last = newNode;

    return last;
}

// Insert node after a specific node
struct Node* addAfter(struct Node* last, int data, int item) {
    if (last == NULL) {
        return NULL;
    }

    struct Node *newNode, *p;
    p = last->next;

    do {
        if (p->data == item) {
            newNode = (struct Node*) malloc(sizeof(struct Node));

            newNode->data = data;

            newNode->next = p->next;

            p->next = newNode;
        }
        if (p == last) {
            last = newNode;
            return last;
        }           
    p = p->next;
    } while (p != last->next);

    printf("\nThe given node is not present in the list");
    return last;
}

// Delete a node
void deleteNote(struct Node** last, int key) {
    if (*last == NULL) {
        return;
    }
    
    // if the list contain only a single node
    if ((*last)->data == key && (*last)->next == (*last)) {
        free(*last);
        *last = NULL;
        return;
    }

    struct Node* temp = *last, *d;

    // if last is to be deleted
    if ((*last)->data == key) {
        while (temp->next != *last) {
            temp = temp->next;
        }
        temp->next = (*last)->next;
        free(*last);
        *last = temp->next;
    }

    while (temp->next != *last && temp->next->data != key) {
        temp = temp->next;
    }

    if (temp->next->data == key) {
        d = temp->next;
        temp->next = d->next;
        free(d);
    }
}

void traverse(struct Node* last) {
    struct Node* p;
    
    if (last == NULL) {
        printf("The list is empty");
        return;
    }
    
    p = last->next;

    do {
       printf("%d ", p->data);
       p= p->next; 
    } while (p != last->next);
}

int main() {
    struct Node* last = NULL;

    last = addToEmpty(last, 6);
    last = addFront(last, 2);
    last = addFront(last, 3);
    last = addAfter(last, 10, 2);
    last = addAfter(last, 7, 8);
    last = addEnd(last, 8);


    traverse(last);

    deleteNote(&last, 8);

    printf("\n");

    traverse(last);

    return 0;
}
