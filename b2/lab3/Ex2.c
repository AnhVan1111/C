#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Website {
    char* url;
    char* title;
}Web;

typedef struct Node {
    Web website;
    struct Node* next; 
}node;

typedef struct Stack {
    node* top, *head;
}stack;
// Function to initialize the stack
void init(stack* st) {
    st->top = NULL;
}
int isEmpty(stack* st) {
    return st->top == NULL;
}

node* head = NULL;
node* createNode(Web website) {
    char* title = website.title;
    char* url = website.url;
    node* new_node = (node*) malloc(sizeof(node));

    new_node->website.title = (char*) malloc(strlen(title) + 1);
    new_node->website.url = (char*) malloc(strlen(url) + 1);
    strcpy(new_node->website.title, title);
    strcpy(new_node->website.url, url);
    new_node->next = NULL;

    node* current = head;
    if (current == NULL) {
        head = new_node;
    }
    else {
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
    return new_node;
}

void push(stack* st, Web website) {
    node* new_node = createNode(website);
    new_node->next = st->top;
    st->top = new_node;
}

Web pop(stack* st) {
    Web popped_web;
    if (isEmpty(st) && st->head == NULL) {
        printf("Stack is empty.\n");
        popped_web.url = NULL;
        popped_web.title = NULL;
        return popped_web;
    }
   else {
        node* temp = st->top;
        popped_web.url = strdup(temp->website.url);
        popped_web.title = strdup(temp->website.title);
        st->top = st->top->next;
        free(temp->website.url);
        free(temp->website.title);
        free(temp);
        return popped_web;
    }
}

void goBackward(stack* backward_st, stack* forward_st) {
    Web current_Web = pop(backward_st);
    if (current_Web.url == NULL || strcmp(current_Web.url, "") == 0) {
        printf("Cannot go back because no previous website!!!\n");
        return;
    }
    push(forward_st, current_Web);
    printf("Go back to: URL: %s, Title: %s\n", current_Web.url, current_Web.title);
}

void goForward(stack* backward_st, stack* forward_st) {
    Web next_Web = pop(forward_st);
    if (next_Web.title == NULL || strcmp(next_Web.url, "") == 0) {
        printf("Cannot go forward because no next website!!!\n");
        return;
    }
    push(backward_st, next_Web);
    printf("Go forward to: URL: %s, Title: %s\n", next_Web.url, next_Web.title);
}

void display(stack* st) {
    if (isEmpty(st)) {
        printf("Stack is empty.\n");
        return;
    }

    node* temp = st->top;
    printf("Stack contents:\n");
    while (temp != NULL) {
        printf("URL: %s, Title: %s\n", temp->website.url, temp->website.title);
        temp = temp->next;
    }
}

int main() {
    stack backwardst, forwardst;
    Web website;
    init(&backwardst);
    init(&forwardst);
    int web_count;
    char url[100], title[100];
    printf("Enter the number of websites you want to create: ");
    scanf("%d", &web_count);
    getchar();
    for (int i = 0; i < web_count; i++) {
        printf("Web number %d\n", i + 1);
        printf("Enter the title of the website: ");
        scanf("%[^\n]%*c", title); 
        printf("Enter the URL of the website: ");
        scanf("%[^\n]%*c", url); 

        website.title = strdup(title);
        website.url = strdup(url);

        push(&forwardst, website);
        free(website.title);
        free(website.url);
    }
    display(&forwardst);

    while (!isEmpty(&forwardst)) {
        pop(&forwardst);
    }

    return 0;
}