#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node *nextNode;
} Node;

typedef struct List{
    int size;
    Node *headNode;
} List;

void initList(List *list){
    // list = (List*)malloc(sizeof(List));
    list->size = 0;
    list->headNode = NULL;
}

void insertList(List *list, int value){
    Node *newNode = (Node*)malloc(sizeof*newNode);
    newNode->value = value;
    newNode->nextNode = NULL;

    if(list->size == 0){
        list->headNode = newNode;
        list->size++;
    }
    else{
        Node *currentNode = list->headNode;
        while(currentNode->nextNode != NULL){
            currentNode = currentNode->nextNode;
        }
        currentNode->nextNode = newNode;
        list->size++;
    }
}

int GCD(int n1, int n2, int i,int gcd){
    if(i <= n1 && i <= n2){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
        return GCD(n1, n2, i+1, gcd);
    }
    return gcd;
}

void Co_Prime(List *list){
    Node *currentNode = list->headNode;
    while(currentNode->nextNode != NULL){
        Node *nextNode = currentNode->nextNode;
        while(nextNode != NULL){
            if(GCD(currentNode->value, nextNode->value, 1, 1) == 1){
                printf("(%d, %d) ",currentNode->value, nextNode->value);
            }
            nextNode = nextNode->nextNode;
        }
        currentNode = currentNode->nextNode;
    }
}

void displayList(List *list){
    Node *currentNode = list->headNode;
    while(currentNode != NULL){
        printf("%d ", currentNode->value);
        currentNode = currentNode->nextNode;
    }
}

int main(){
    List list;
    initList(&list);

    int arr[10] = {2, 10, 27, 13, 90, 45, 5, 26, 49, 50};
    for(int i = 0; i < 10; i++){
        insertList(&list, arr[i]);
    }

    displayList(&list);

    printf("List of co-prime numbers:\n");
    Co_Prime(&list);

    return 0;
}
