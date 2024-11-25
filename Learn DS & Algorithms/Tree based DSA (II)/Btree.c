#include <stdio.h>
#include <stdlib.h>

#define MAX 3

typedef struct BtreeNode {
    int val[MAX + 1];
    int count;
    struct BtreeNode* link[MAX + 1];
};
struct BtreeNode* root;
// Create a node
struct BtreeNode* createNode(int val, struct BtreeNode* child) {
    struct BtreeNode* newNode = (struct BtreeNode*) malloc(sizeof(struct BtreeNode));
    newNode->val[1] = val;
    newNode->count = 1;
    newNode->link[0] = root;
    newNode->link[1] = child;
    return newNode;
}






