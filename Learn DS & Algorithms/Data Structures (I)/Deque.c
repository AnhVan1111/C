#include <stdio.h>
#define MAX 10


void addFront(int *arr, int item, int *pfront, int *prear) {
    int i, c, k;

    if (*pfront == 0 && *prear == MAX - 1) {
        printf("\nDeque is full.\n");
        return;
    }

    if (*pfront == -1) {
        *pfront = *prear = 0;
        arr[*pfront] = item;
        return;
    }

    if (*prear != MAX - 1) {
        c = count(arr);
        k = *prear + 1;
        for (i = 1; i <= c; i++) {
            arr[k] = arr[k - 1];
            k--;
        }
        arr[k] = item;
        *pfront = k;
        (*prear)++;
    }
    else {
        (*pfront)--;
        arr[*pfront] = item;
    }   
}

void addRear(int *arr, int item, int *pfront, int *prear) {
    int i, k;

    if (*pfront == 0 && *prear == MAX - 1) {
        printf("\nDeque is full.\n");
        return;
    }
    
    if (*pfront == -1) {
        *prear = *pfront = 0;
        arr[*prear] = item;
        return;
    }

    if (*prear == MAX - 1) {
        k = *pfront - 1;
        for (i = *pfront - 1; i < *prear; i++) {
            k = i;
            if (k == MAX - 1) {
                arr[k] = 0;
            }
            else {
                arr[k] = arr[i + 1];
            }
        }
        (*prear)--;
        (*pfront)--;
    }
    (*prear)++;
    arr[*prear] = item; 
}

int delFront(int *arr, int *pfront, int *prear) {
    int item;

    if (*pfront == -1) {
        printf("\nDeque is empty.\n");
        return 0;
    }
    
    item = arr[*pfront];
    arr[*pfront] = 0;

    if (*pfront == *prear) {
        *pfront = *prear = -1;
    }
    else {
        (*pfront)++;
    }

    return item;
}

int delRear(int *arr, int *pfront, int *prear) {
    int item;

    if (*pfront == -1) {
        printf("\nDeque is empty.\n");
        return 0;
    }

    item = arr[*prear];
    arr[*prear] = 0;
    (*prear)--;
    if (*prear == -1) {
        *pfront = -1;
    }
    
    return item;
}