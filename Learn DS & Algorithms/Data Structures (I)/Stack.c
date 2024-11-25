// Stack is a linear data structure follows LIFO( Last In First Out)
// This means the last element inserted inside the stack is removed first.
/*
    Push: Add an element to the top of a stack
    Pop: Remove an element from the top of a stack
    IsEmpty: Check if the stack is empty
    IsFull: Check if the stack is full
    Peek: Get the value of the top element without removing it
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int count = 0;

// Creating a stack
struct Stack {
    int items[MAX];
    int top;
};
typedef struct Stack st;

void createEmptyStack(st *s) {
    s->top = -1; // empty stack
}

// Check if the stack is full
int isFull(st *s) {
    if (s->top == MAX - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

// Check if the stack is empty
int isempty(st *s) {
    if (s->top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

// Add elements into stack
void push(st *s, int newitem){
    if (isFull(s)) {
        printf("STACK FULL");
    }
    else {
        s->top++;
        s->items[s->top] = newitem;
    }
    count++;
}

// Remove element from stack
void pop(st *s) {
    if (isempty(s)) {
        printf("\n STACK EMPTY \n");
    }
    else {
        printf("Item popped = %d", s->items[s->top]);
        s->top--;
    }
    count--;
    printf("\n");
}

// Print elemnets of stack
void printStack(st *s) {
    printf("Stack: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

// Driver code
int main() {
    int ch;
    st *s;
    s = (st *) malloc(sizeof(st));

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    printf("\nAfter popping out:\n");
    printStack(s);
}

