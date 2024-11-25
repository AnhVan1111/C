// Checking if a binary tree is height balanced in C
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int item;
    struct Node* left, *right;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->item = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Check for height balance
bool checkHeightBalance(struct Node* root, int *height) {
    int leftHeight = 0, rightHeight = 0;
    int l = 0, r = 0;

    if (root == NULL){
        *height = 0;
        return 1;
    }

    l = checkHeightBalance(root->left, &leftHeight);
    r = checkHeightBalance(root->right, &rightHeight);

    *height = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;

    if ((leftHeight - rightHeight >= 2) || (rightHeight - leftHeight >= 2)) {
        return 0;
    }
    else {
        return l && r;
    }
}

int main() {
    int height = 0;
    struct Node* root = NULL;

    root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    if (checkHeightBalance(root, &height)){
        printf("The tree is balance.");
    }
    else {
        printf("The tree is not balance.");
    }
}
