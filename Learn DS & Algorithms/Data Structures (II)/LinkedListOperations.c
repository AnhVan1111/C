#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
    int data;
    struct Node* next;
};

// Insert at the beginning
void InsertAtBeginning(struct Node** head_ref, int new_data) {
    // Allocate memory to a node
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    // Insert the data
    new_node->data = new_data;
    new_node->next = (*head_ref);

    // Move head to new node
    (*head_ref) = new_node;
}

// Insert a node after a node
void InsertAfter(struct Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("The given previous node cannot be NULL.");
        return;
    }

    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Insert at the end
void InsertAtEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    return;
}

// Delete a node
void deleteNode(struct Node** head_ref, int key) {
    struct Node* temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // find the key to be deleted
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // if the key is not present
    if (temp == NULL) {
        return;
    }

    // remove the node
    prev->next = temp->next;

    free(temp);
}

// Search a node
int searchNode(struct Node** head_ref, int key) {
    struct Node* current = *head_ref;

    while (current != NULL) {
        if (current->data == key) {
            return 1;
        }
        current = current->next;
    }
    
    return 0;
}

// Sort the linked list
void sortLinkedList(struct Node** head_ref) {
    struct Node* current = *head_ref, *index = NULL;
    int temp;

    if (head_ref == NULL) {
        return;
    }
    else {
        while (current != NULL) {
            index = current->next;

            while (index != NULL) {
                if (current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }

            current = current->next;
        }
    }  
}

// Print the Linked list
void printLinkedlist(struct Node* node) {
    while (node != NULL) {
        printf(" %d", node->data);
        node = node->next;
    } 
}

// Driver program
int main() {
    struct Node* head = NULL;

    InsertAtBeginning(&head, 2);
    InsertAtBeginning(&head, 3);
    InsertAfter(head->next, 5);
    InsertAfter(head->next, 6);
    InsertAtEnd(&head, 1);
    InsertAtEnd(&head, 4);

    printf("Linked list: ");
    printLinkedlist(head);

    printf("\nAfter deleting an element: ");
    deleteNode(&head, 3);
    printLinkedlist(head);

    int item_to_find = 3;
    if (searchNode(&head, item_to_find)) {
        printf("\n%d is found", item_to_find);
    }
    else {
        printf("\n%d is not found", item_to_find);
    }

    sortLinkedList(&head);
    printf("\nSorted List: ");
    printLinkedlist(head);
}
