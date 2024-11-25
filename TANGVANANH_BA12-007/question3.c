#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a; // O(1), it just take temp equal a
    *a = *b; // O(1), it just take a equal b
    *b = temp; // O(1), it just take b equal temp
}
void selectSort(int arr[], int begin, int end) {
    if (begin >= end) { // O(1), to check begin larger or equals
        return; // O(1), as it only returns the value
    }
    int min = begin; // O(1), declare min equal begin
    int max = end; // O(1), declare max equal end

    for (int i = begin; i <= end; i++) {
        if (arr[i] < arr[min]) {
            min = i;
        }
        else if (arr[i] > arr[max]) {
            max = i;
        }        
    }
    if (min != begin) {
        swap(&arr[begin], &arr[min]);
    }
    if (max == begin) {
        max = min;
    }
    if (max != end) {
        swap(&arr[end], &arr[max]);
    }
    
    selectSort(arr, begin + 1, end - 1);
}

void printArr(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (i == size - 1) {
            printf("%d", arr[i]);
        }
        else {
            printf("%d, ", arr[i]);
        }
        
    }
    printf("\n");
}
int main() {
    int value[] = {10, 44, 7, 13, 20, 9};
    int size = sizeof(value) / sizeof(value[0]);

    printf("Original array: ");
    printArr(value, size);
    selectSort(value, 0, size - 1);
    printf("\nSorted Array in Ascending Order: ");
    printArr(value, size);

    return 0;
}