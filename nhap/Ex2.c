#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int size, int value) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == value) {
            return mid;
        }
        if (arr[mid] < value) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

void insertionSort(int arr[], int size) {
    for (int step = 1; step < size; step++) {
        int key = arr[step];
        int j = step - 1;
        while (key < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int data[] = {1, 2, 3, 5, 6, 7};
    int size = sizeof(data) / sizeof(data[0]);
    int v;
    printf("Enter a new value: ");
    scanf("%d", &v);

    int* newArr = (int*) malloc((size + 1) * sizeof(int));
    for (int i = 0; i < size; i++) {
        newArr[i] = data[i];
    }
    newArr[size] = v;

    insertionSort(newArr, size + 1);
   
    printf("Array when added new value: ");
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", newArr[i]);
    }
    free(newArr);

    int result = binarySearch(newArr, size + 1, v);
    if (result == -1) {
        printf("\nNot found in array");
    }
    else {
        printf("\nItem is found at index %d", result);
    }

    return 0;
}