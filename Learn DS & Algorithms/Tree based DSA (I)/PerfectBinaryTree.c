// Checking if a binary tree is a perfect binary tree in C

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int item;
    struct Node* left, *right;
};

// Create a new node
struct Node* createNewnode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->item = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Calculate the depth
int depth(struct Node* newNode) {
    int d = 0;
    if (newNode != NULL) {
        d++;
        newNode = newNode->left;
    }
    return d;
}

// Check if the tree is perfect
bool is_perfect(struct Node* root, int d, int level) {
    if (root == NULL) {
        return true;
    }
    if (root->left == NULL && root->right == NULL) {
        return (d == level + 1);
    }
    if (root->left == NULL || root->right == NULL) {
        return false;
    }
    return (is_perfect(root->left, d, level + 1) && is_perfect(root->right, d, level + 1));
}

// Wrapper function
bool is_Perfect(struct Node* root) {
    int d = depth(root);
    return is_perfect(root, d, 0);
}

int main() {
    struct Node* root = NULL;
    root = createNewnode(1);

    root->left = createNewnode(2);
    root->right = createNewnode(3);

    root->left->left = createNewnode(4);
    root->left->right = createNewnode(5);

    root->right->left = createNewnode(6);

    if (is_Perfect(root)) {
        printf("The tree is a perfect binary tree.\n");
    }
    else {
        printf("The tree is not perfect binary tree.\n");
    }
}
