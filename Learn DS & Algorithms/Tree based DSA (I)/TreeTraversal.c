#include <stdio.h>
#include <stdlib.h>

// inorder, preorder and postorder
struct Node {
    int item;
    struct Node* left;
    struct Node* right;
};

// inorder traversal (left - root - right)
void inorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d -> ", root->item);
    inorderTraversal(root->right);
}

// preoder traversal (root - left - right)
void preorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d -> ", root->item);
    preorderTraversal(root->left);
    preorderTraversal(root->right);    
}

// postorder traversal (left - right - root)
void postorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d -> ", root->item);
}

// Create a new node
struct Node* createNode(value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Insert on the left of the node
struct Node* insertleft(struct Node* root, int value) {
    root->left = createNode(value);
    return root->left;
}

// Insert on the right of the node
struct Node* insertRight(struct Node* root, int value) {
    root->right = createNode(value);
    return root->right;
}

int main() {
    struct Node* root = createNode(1);

    insertleft(root, 12);
    insertRight(root, 9);

    insertleft(root->left, 5);
    insertRight(root->left, 6);

    printf("Inorder Traversal: \n");
    inorderTraversal(root);

    printf("\nPreorder Traversal: \n");
    preorderTraversal(root);

    printf("\nPostorder Traversal: \n");
    postorderTraversal(root);
}


