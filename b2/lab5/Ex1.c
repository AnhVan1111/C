#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[], int size, int x) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (array[mid] == x) {
            return mid;
        }
        if (array[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        } 
    }
    return -1;
}

int main() {
    int data[] = {1, 2, 3, 5, 6, 7};
    int size = sizeof(data) / sizeof(data[0]);
    int v;
    printf("Enter a new value: ");
    scanf("%d", &v);

    int* newArray = (int*) malloc((size + 1) * sizeof(int));
    for (int i = 0; i < size; i++) {
        newArray[i] = data[i];
    }
    newArray[size] = v;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size + 1; j++) {
            if (newArray[i] > newArray[j]) {
                int temp = newArray[i];
                newArray[i] = newArray[j];
                newArray[j] = temp;
            }
        }
    }

    printf("New array: ");
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", newArray[i]);
    }
    free(newArray);

    int result = binarySearch(newArray, size + 1, v);
    if (result == -1) {
        printf("\nNot found");
    }
    else {
        printf("\nItem is found at index %d", result);
    }

    return 0;
}