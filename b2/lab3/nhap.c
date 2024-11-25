#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for a website
typedef struct {
    char url[100];
    char title[100];
} Website;

// Structure for a stack node
typedef struct Node {
    Website website;
    struct Node* next;
} Node;

// Structure for the stack
typedef struct {
    Node* top;
} Stack;

// Function to initialize the stack
void init(Stack* stack) {
    stack->top = NULL;
}

// Function to check if the stack is empty
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

// Function to create a new stack node
Node* createNode(Website website) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->website.url, website.url);
    strcpy(newNode->website.title, website.title);
    newNode->next = NULL;
    return newNode;
}

// Function to push a website onto the stack
void push(Stack* stack, Website website) {
    Node* newNode = createNode(website);
    newNode->next = stack->top;
    stack->top = newNode;
}

// Function to pop a website from the stack
Website pop(Stack* stack) {
    if (isEmpty(stack)) {
        Website emptyWebsite = {"", ""};
        return emptyWebsite;
    }

    Node* temp = stack->top;
    Website poppedWebsite = temp->website;
    stack->top = temp->next;
    free(temp);
    return poppedWebsite;
}

// Function to display the contents of the stack
void display(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }

    Node* temp = stack->top;
    printf("Stack contents:\n");
    while (temp != NULL) {
        printf("URL: %s, Title: %s\n", temp->website.url, temp->website.title);
        temp = temp->next;
    }
}

// Function to handle backward navigation
void goBackward(Stack* backwardStack, Stack* forwardStack) {
    Website currentWebsite = pop(backwardStack);
    if (strcmp(currentWebsite.url, "") == 0) {
        printf("Cannot go backward. No previous website.\n");
        return;
    }

    push(forwardStack, currentWebsite);
    printf("Navigated backward to: URL: %s, Title: %s\n", currentWebsite.url, currentWebsite.title);
}

// Function to handle forward navigation
void goForward(Stack* backwardStack, Stack* forwardStack) {
    Website nextWebsite = pop(forwardStack);
    if (strcmp(nextWebsite.url, "") == 0) {
        printf("Cannot go forward. No next website.\n");
        return;
    }

    push(backwardStack, nextWebsite);
    printf("Navigated forward to: URL: %s, Title: %s\n", nextWebsite.url, nextWebsite.title);
}

int main() {
    Stack backwardStack;
    Stack forwardStack;
    init(&backwardStack);
    init(&forwardStack);

    // Test the stack operations
    Website website1 = {"https://www.website1.com", "Website 1"};
    Website website2 = {"https://www.website2.com", "Website 2"};
    Website website3 = {"https://www.website3.com", "Website 3"};

    push(&backwardStack, website1);
    push(&backwardStack, website2);
    push(&backwardStack, website3);

    printf("Backward stack after pushing websites:\n");
    display(&backwardStack);

    goBackward(&backwardStack, &forwardStack);
    printf("Backward stack after going backward:\n");
    display(&backwardStack);
    printf("Forward stack after going backward:\n");
    display(&forwardStack);

    goForward(&backwardStack, &forwardStack);
    printf("Backward stack after going forward:\n");
    display(&backwardStack);
    printf("Forward stack after going forward:\n");
    display(&forwardStack);

    return 0;
}