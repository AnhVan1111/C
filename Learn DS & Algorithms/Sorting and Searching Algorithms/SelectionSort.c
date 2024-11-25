#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min]) {
                min = i;
            }
        }
        swap(&array[step], &array[min]);
    }    
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main() {
    int data[] = {-2, 45, 0, 11, -9};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original array:\n");
    printArray(data, size);

    selectionSort(data, size);

    printf("\nSorted Array in Ascending Order:\n");
    printArray(data, size); 

    return 0;
}