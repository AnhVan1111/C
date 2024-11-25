// Queue follows the First In First Out (FIFO) rule - the item that goes in first is the item that comes out first.
/*
    enqueue: putting items 
    dequeue: removing items
    IsEmpty: Check if the queue is empty
    IsFull: Check if the queue is full
    Peek: Get the value of the front of the queue without removing it
*/

#include <stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main() {
    // deQueue is not possible on empty queue
    deQueue();

    // enQueue 5 elements
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    // 6th element can't be added to because the queue is full
    enQueue(6);

    display();

    // deQueue removes element entered first
    deQueue();

    // Now we just have 4 elements
    display();

    return 0;
}

void enQueue(int value) {
    if (rear == SIZE - 1) {
        printf("\nQueue is Full");
    }
    else {
        if (front == -1) {
            front = 0;
        }      
        rear++;
        items[rear] = value;
        printf("\nInserted -> %d", value);
    } 
}

void deQueue() {
    if (front == -1) {
        printf("\nQueue is empty.");
    }
    else {
        printf("\nDeleted: %d", items[front]);
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

// Function to frint the queue
void display() {
    if (rear == -1) {
        printf("\nqueue is empty.");
    }
    else {
        printf("\nQueue elements are:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", items[i]);
        }
    }
    printf("\n");
}