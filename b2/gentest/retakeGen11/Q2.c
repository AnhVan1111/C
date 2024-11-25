#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to count the number of odd and even digits in the linked list
void countOddEvenDigits(Node* head, int* oddCount, int* evenCount) {
    Node* temp = head;

    while (temp != NULL) {
        int digit = temp->data;

        if (digit % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }

        temp = temp->next;
    }
}

// Function to free the memory allocated for the linked list
void freeLinkedList(Node* head) {
    Node* temp = head;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int N = 3450;

    // Create a linked list from the digits of N
    Node* head = NULL;
    while (N > 0) {
        int digit = N % 10;
        insertAtEnd(&head, digit);
        N /= 10;
    }

    // Count the number of odd and even digits
    int oddCount = 0;
    int evenCount = 0;
    countOddEvenDigits(head, &oddCount, &evenCount);

    // Print the results
    printf("Number of odd digits: %d\n", oddCount);
    printf("Number of even digits: %d\n", evenCount);

    // Free the memory allocated for the linked list
    freeLinkedList(head);

    return 0;
}