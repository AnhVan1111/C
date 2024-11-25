#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to respresent a item in stock
typedef struct Item {
    char* item_name;
    int quantity;
    double price;
    struct Item* next;
}items;

void Item_storage(items** stock, char* item_name, int quantity, double price) {
    // Check if item not existed in stock
    items* new_item = (items* ) malloc(sizeof(items));
    new_item->item_name = (char*) malloc(strlen(item_name) + 1);
    strcpy(new_item->item_name, item_name);
    new_item->price = price;
    new_item->quantity = quantity;
    new_item->next = NULL;

    items* current = *stock;
    if (*stock == NULL) {
        *stock = new_item;
    }
    else {
        current = *stock;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_item;
    }
    // Check if item existed in stock
    while (current != NULL) {
        if (strcmp(current->item_name, item_name) == 0) { // campare
            current->quantity += quantity;
            return;
        }
        current = current->next;
    }
}
// Structure to respresent a customer
typedef struct Customers {
    char* cus_name, *item_name;
    int quantity_of_product_to_buy;
}customers;
// Structure to respresent a node in the queue
typedef struct Node {
    customers Customer;
    struct Node* next;
}node;
// Structure to respresent the queue
typedef struct Cus_queue {
    struct Node* front,* rear;
    int size;
}cus_queue;
// Function to initialize the queue
void init(cus_queue* queue) {
    queue->front = NULL;
    queue->rear = NULL;
    queue->size = 0;
}

// Function to add a customer to the queue
void enqueue(cus_queue* queue, char* cus_name, char* item_name, int quantityToBuy) {
    node* newNode = (node*) malloc(sizeof(node));
    newNode->Customer.cus_name = (char*) malloc(strlen(cus_name) + 1);
    newNode->Customer.item_name = (char*) malloc(strlen(item_name) + 1);

    strcpy(newNode->Customer.cus_name, cus_name);
    strcpy(newNode->Customer.item_name, item_name);
    newNode->Customer.quantity_of_product_to_buy = quantityToBuy;
    newNode->next = NULL;

    if (queue->front == NULL) {
        queue->front = queue->rear = newNode;
    }
    else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
    queue->size++;
}
// Function to remove a customer from the queue
void dequeue(cus_queue* queue, char* cus_name, char* item_name, int quantityToBuy) {
    if (queue->size == 0) {
        printf("No Customer in the queue!!!");
        return;
    }
    else {
        node* temp = queue->front;
        temp->Customer.cus_name = cus_name;          
        temp->Customer.item_name = item_name;
        temp->Customer.quantity_of_product_to_buy = quantityToBuy;
        if (queue->front == queue->rear) {
            queue->front = queue->rear = NULL;
        }
        else {
            queue->front = queue->front->next;
        }
        free(temp);
        queue->size--;
    }
}

void purchases_Item(items* stock, char* cus_name, char* item_name, int quantityToBuy) {
    cus_queue* queue;
    int itemCount = 100;
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(stock[i].item_name, item_name) == 0) {
            if (stock[i].quantity >= quantityToBuy) {
                stock[i].quantity -= quantityToBuy;
                printf("==> Successfully purchase!!!\n--Stock: %s : %d\n", item_name, quantityToBuy);
            }
            else {
                printf("not purchased successfully!!!\n");
            }
            return;
        }
        else {
            printf("Item not found");
        }
    dequeue(queue, cus_name, item_name, quantityToBuy); 
    }
}

void display(cus_queue* queue) {
    node* current = queue->front;
    printf("Customer in the queue:\n");
    while (current != NULL) {
        printf("Customer name: %s\n", current->Customer.cus_name);
        printf("Number of products: %d\n", current->Customer.quantity_of_product_to_buy);
        printf("Items to buy:");
        printf("%s\n", current->Customer.item_name);
        current = current->next;
    }
    
}
int main() {
    cus_queue* queue;
    queue = (cus_queue*) malloc(sizeof(cus_queue));
    items* stock = NULL;

    init(queue);
    char item_name[100];
    int quantity;
    double price;
    int itemCount;
    printf("Enter the number of item: ");
    scanf("%d", &itemCount);
    getchar();
    for (int i = 0; i < itemCount; i++) {
        printf("Item %d\n", i + 1);
        printf("Enter item name: ");
        fgets(item_name, sizeof(item_name), stdin);
        item_name[strcspn(item_name, "\n")] = '\0';
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        printf("Enter the price: ");
        scanf("%lf", &price);
        getchar();
        Item_storage(&stock, item_name, quantity, price);
        getchar();
    }
    int customersCount;
    char cus_name[100];
    int quantityToBuy;
    printf("Enter the number of customers: ");
    scanf("%d", &customersCount);
    getchar();
    for (int i = 0; i < customersCount; i++) {
        printf("Enter customer %d:\n", i + 1);
        printf("Enter name: ");
        fgets(cus_name, sizeof(cus_name), stdin);
        cus_name[strcspn(cus_name, "\n")] = '\0';
        printf("The item to buy: ");
        fgets(item_name, sizeof(item_name), stdin);
        item_name[strcspn(item_name, "\n")] = '\0';
        printf("Enter the quantity to buy: ");
        scanf("%d", &quantityToBuy);
        
        enqueue(queue, cus_name, item_name, quantityToBuy);
        purchases_Item(stock, cus_name, item_name, quantityToBuy);
        getchar();
    }
    getchar();
    free(stock);
    display(queue);
    getchar();

    return 0;
}








