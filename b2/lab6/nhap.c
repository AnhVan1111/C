#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to initialize an array with n random values
void initializeArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;  // Assuming random values between 0 and 99
    }
}

// Function to create a new tree node
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->value = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to build the binary tree using the provided definition
struct TreeNode* buildBinaryTree(int arr[], int n, int E) {
    int height = log2(n) + 1;
    int leafNodes = pow(2, height - 1);
    struct TreeNode* root = createNode(arr[0]);

    struct TreeNode* queue[100];  // Assuming a maximum of 100 nodes in the tree
    int front = 0, rear = 0;

    queue[rear++] = root;

    int i = 1;
    while (front != rear && i < n) {
        struct TreeNode* currNode = queue[front++];

        if (currNode->left == NULL) {
            currNode->left = createNode(arr[i]);
            queue[rear++] = currNode->left;
            i++;
        }

        if (i < n && currNode->right == NULL) {
            currNode->right = createNode(arr[i]);
            queue[rear++] = currNode->right;
            i++;
        }
    }

    while (front != rear) {
        struct TreeNode* currNode = queue[front++];

        if (currNode->left == NULL) {
            currNode->left = createNode(E);
        }

        if (currNode->right == NULL) {
            currNode->right = createNode(E);
        }
    }

    return root;
}

// Function to display the tree information (BFS traversal)
void displayTree(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    struct TreeNode* queue[100];  // Assuming a maximum of 100 nodes in the tree
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front != rear) {
        int size = rear - front;

        for (int i = 0; i < size; i++) {
            struct TreeNode* currNode = queue[front++];

            printf("%d ", currNode->value);

            if (currNode->left != NULL) {
                queue[rear++] = currNode->left;
            }

            if (currNode->right != NULL) {
                queue[rear++] = currNode->right;
            }
        }

        printf("\n");
    }
}

// Function to search for a value in the tree using recursion
struct TreeNode* searchValue(struct TreeNode* root, int value) {
    if (root == NULL || root->value == value) {
        return root;
    }

    struct TreeNode* leftResult = searchValue(root->left, value);
    if (leftResult != NULL) {
        return leftResult;
    }

    struct TreeNode* rightResult = searchValue(root->right, value);
    return rightResult;
}

// Function to insert a new node into the tree
void insertNode(struct TreeNode* root, int value) {
    if (root == NULL) {
        return;
    }

    struct TreeNode* queue[100];  // Assuming a maximum of 100 nodes in the tree
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front != rear) {
        struct TreeNode* currNode = queue[front++];

        if (currNode->left == NULL) {
            currNode->left = createNode(value);
            return;
        } else {
            queue[rear++] = currNode->left;
        }

        if (currNode->right == NULL) {
            currNode->right = createNode(value);
            return;
        } else {
            queue[rear++] = currNode->right;
        }
    }
}

// Function to remove a node from the tree
void removeNode(struct TreeNode* root, struct TreeNode* node) {
    if (root == NULL || node == NULL) {
        return;
    }

    struct TreeNode* queue[100];  // Assuming a maximum of 100 nodes in the tree
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front != rear) {
        
        struct TreeNode* currNode = queue[front++];

        if (currNode->left == node) {
            free(currNode->left);
            currNode->left = NULL;
            return;
        } else if (currNode->left != NULL) {
            queue[rear++] = currNode->left;
        }

        if (currNode->right == node) {
            free(currNode->right);
            currNode->right = NULL;
            return;
        } else if (currNode->right != NULL) {
            queue[rear++] = currNode->right;
        }
    }
}

int main() {
    const int n = 5;
    int arr[n];
    time_t t;
    srand((unsigned) time(&t));

    initializeArray(arr, n);

    struct TreeNode* root = buildBinaryTree(arr, n, 42);

    printf("Binary Tree:\n");
    displayTree(root);

    int value;
    printf("Enter a value to search: ");
    scanf("%d", &value);

    struct TreeNode* searchResult = searchValue(root, value);
    if (searchResult != NULL) {
        printf("Value found in the tree. Subtrees with %d as the root:\n", value);
        displayTree(searchResult);
    } else {
        printf("Value not found in the tree.\n");
    }

    int newValue;
    printf("Enter a value to insert: ");
    scanf("%d", &newValue);
    insertNode(root, newValue);

    printf("Binary Tree after insertion:\n");
    displayTree(root);

    struct TreeNode* nodeToRemove = searchValue(root, newValue);
    if (nodeToRemove != NULL) {
        removeNode(root, nodeToRemove);
        printf("Binary Tree after removal:\n");
        displayTree(root);
    } else {
        printf("Value not found in the tree. No removal performed.\n");
    }

    return 0;
}