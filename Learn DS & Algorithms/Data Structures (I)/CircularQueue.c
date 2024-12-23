#include <stdio.h>
#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

// Check if the queue is full
int isFull() {
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) {
        return 1;
    }
    return 0;
}

// Check if the queue is empty
int isEmpty() {
    if (front == -1) {
        return 1;
    }
    return 0;
}

// Adding an element
void enQueue(int element) {
    if (isFull()) {
        printf("\nQueue is Full!.\n");
    }
    else {
        if (front == -1) {
            front = 0;
        }    
        rear = (rear + 1) % SIZE;
        items[rear] = element;
        printf("\nInserted -> %d", element);
    }
}

// Removing an element
int deQueue() {
    int element;
    if (isEmpty()) {
        printf("\nQueue is Empty!");
        return (-1);
    }
    else {
        element = items[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % SIZE;
        }
    }
    printf("\nDeleted element -> %d", element);
    return (element);
}

// Display the queue
void display() {
    int i;
    if (isEmpty()) {
        printf("\nEmpty Queue!\n");
    }
    else {
        printf("\nFront -> %d", front);
        printf("\nItems -> ");
        for (i = front; i != rear; i = (i + 1) % SIZE) {
            printf("%d ", items[i]);
        }
        printf("%d ", items[i]);
        printf("\nRear -> %d \n", rear);
    }
}

int main() {
    deQueue();

    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    // Fails to enqueue because front == 0 && rear == SIZE - 1
    enQueue(6);

    display();
    deQueue();

    display();

    enQueue(7);
    display();

    // Fails to enqueue because front == rear + 1
    enQueue(8);

    return 0;
}

