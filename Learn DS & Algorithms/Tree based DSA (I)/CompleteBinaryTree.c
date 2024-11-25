// Checking if a binary tree is complete binary tree 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left, *right;
};

// Create newNode
struct Node* createNode(char k) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = k;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Count the number of nodes
int countNumNode(struct Node* root) {
    if (root == NULL) {
        return (0);
    }
    return (1 + countNumNode(root->left) + countNumNode(root->right));
}

// Check if the tree is a complete binary tree
bool checkCompleteBinaryTree(struct Node* root, int index, int numberNodes) {
    if (root == NULL) {
        return true;
    }
    if (index >= numberNodes) {
        return false;
    }
    return (checkCompleteBinaryTree(root->left, 2 * index + 1, numberNodes) && checkCompleteBinaryTree(root->right, 2 * index + 1, numberNodes));
}

int main() {
    struct Node* root = NULL;
    
    root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    root->right->left = createNode(6);

    int node_count = countNumNode(root);
    int index = 0;

    if (checkCompleteBinaryTree(root, index, node_count)) {
        printf("The tree is a complete binary tree.\n");
    }
    else {
        printf("The tree is not a complete binary tree.\n");
    }
}

