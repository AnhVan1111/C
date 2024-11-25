#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct Node {
    int value;
    struct Node* left, *right;
}node;
//function to initialize an array with n random values
void initArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; 
    } 
}
//function to create a new node
node* createNewNode(int value) {
    node* newNode = (node*) malloc(sizeof(node));
    newNode->value = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//function to build this binary tree with the above definition with any data structure learned in lectures
node* buildBinaryTree(int arr[], int n, int E) {
    int height = log2(n) + 1;
    int leaf_node = pow(2, height - 1);
    node* root = createNewNode(arr[0]);

    node* queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;

    int i = 1;
    while (front != rear && i < n) {
        node* currentNode = queue[front++];
        if (currentNode->left == NULL) {
            currentNode->left = createNewNode(arr[i]);
            queue[rear++] = currentNode->left;
            i++;
        }
        if (i < n && currentNode->right == NULL) {
            currentNode->right = createNewNode(arr[i]);
            queue[rear++] = currentNode->right;
            i++;
        }
    }

    while (front != rear) {
        node* currentNode = queue[front++];
        if (currentNode->left == NULL) {
            currentNode->left = createNewNode(E);
        }
        if (currentNode->right == NULL) {
            currentNode->right = createNewNode(E);
        }
    }
    return root;
}

//function to display the tree information
void displayTree(node* root) {
    if (root == NULL) {
        return;
    }
    node* queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;

    while (front != rear) {
        int size = rear - front;
        for (int i = 0; i < size; i++) {
            node* currentNode = queue[front++];
            printf("%d ", currentNode->value);
            if (currentNode->left != NULL) {
                queue[rear++] = currentNode->left;
            }
            if (currentNode->right != NULL) {
                queue[rear++] = currentNode->right;
            }
        }
        printf("\n");
    }
}

//function to search an input value using recursion
node* searchValue(node* root, int value) {
    if (root == NULL || root->value == value) {
        return root;
    }
    node* leftResult = searchValue(root->left, value);
    if (leftResult != NULL) {
        return leftResult;
    }
    node* rightResult = searchValue(root->right, value);
    return rightResult;
}

//function to insert new nodes into the tree
void insertnewNode(node** root, int value) {
    node* newNode = createNewNode(value);
    if (*root == NULL) {
        *root = newNode;
        return;
    }
    node* currentNode = *root;
    for (;;) { //infinite loop
        if (value <= currentNode->value) {
            if (currentNode->left == NULL) {
                currentNode->left = newNode;
                return;
            }
            else {
                currentNode = currentNode->left;
            }
        }
        else {
            if (currentNode->right == NULL) {
                currentNode->right = newNode;
                return;
            }
            else {
                currentNode = currentNode->right;
            }
        }
    }
}
// Find the inorder successor
node* minValuenode(node* Node) {
    node* current = Node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}
//function to remove nodes from the tree
node* removeNode(node* root, int value) {
    if (root == NULL) {
        return NULL;
    }
    if (value < root->value) {
        root->left = removeNode(root->left, value);
    }
    else if (value > root->value) {
        root->right = removeNode(root->right, value);
    }
    else {
        if (root->left == NULL) {
            node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            node* temp = root->left;
            free(root);
            return temp;
        }
        node* temp = minValuenode(root->right);
        root->value = temp->value;
        root->right = removeNode(root->right, temp->value);
    }
    return root;
}

int main() {
    const int n = 5;
    int arr[n];

    time_t t;
    srand((unsigned) time(&t));
    initArray(arr, n);

    node* root = buildBinaryTree(arr, n, 42);

    printf("Binary Tree:\n");
    displayTree(root);

    int value;
    printf("Enter a value want to search: ");
    scanf("%d", &value);
    node* search = searchValue(root, value);
    if (search != NULL) {
        printf("Value %d is found in the tree!!!\n", value);
        displayTree(search);
    }
    else {
        printf("Value is not found in the tree.\n");
    }
    
    int newValue;
    printf("Enter a new value: ");
    scanf("%d", &newValue);
    insertnewNode(&root, newValue);
    printf("Binary tree after add new value:\n");
    displayTree(root);

    node* node_remove = searchValue(root, newValue);
    if (node_remove != NULL) {
        removeNode(root, node_remove->value);
        printf("Binary tree after remove:\n");
        displayTree(root);
    }
    else {
        printf("Value is not found in the tree!!!\n");
    }
    return 0;
}