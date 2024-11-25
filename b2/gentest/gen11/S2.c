#include <stdio.h>
// Q1:
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
/*function selectionSort(array[], size)
    for step equals 0 to size minus 1 do
        min = step
        for i equal step plus 1 to size do
            if(array[i] < array[min]) then
                min = i
            end if
        end for
        swap(array[step], array[min])
    end for
end function*/

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
/*
1. Best-case scenario:
In the best-case scenario, the input array is already sorted in ascending order.
In this case, the selectionSort function will still iterate over the array, but the inner loop will never find a smaller element than the current minimum. 
As a result, the swap operation will not be executed.
Therefore, the best-case time complexity is O(n), where n is the size of the array.
This is because the selectionSort function has to perform n-1 iterations of the outer loop, each involving n-i iterations of the inner loop, where i is the current step.

2. Worst-case scenario:
In the worst-case scenario, the input array is sorted in descending order.
In this case, the selectionSort function will perform the maximum number of swaps for each step of the outer loop.
The outer loop will iterate n-1 times, and for each step, the inner loop will find the minimum element in the remaining unsorted portion of the array, resulting in n-i comparisons.
Therefore, the worst-case time complexity is O(n^2), where n is the size of the array.

3. Average-case scenario:
The average-case time complexity of the selection sort algorithm is also O(n^2).
This is because, on average, the algorithm performs approximately (n^2)/2 comparisons and swaps, regardless of the initial order of the array.
The exact number of comparisons and swaps will depend on the distribution of the input elements, but the overall trend is quadratic.*/



Q2: the Selection Sort by using Binary Recusion
#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void binaryRecursiveSelectionSort(int array[], int start, int end) {
    if (start >= end) {
        return;  // Base case: only one element or invalid range
    }

    int min = start;
    int max = end;

    for (int i = start; i <= end; i++) {
        if (array[i] < array[min]) {
            min = i;
        } else if (array[i] > array[max]) {
            max = i;
        }
    }

    if (min != start) {
        swap(&array[start], &array[min]);
    }

    if (max == start) {
        max = min;  // Adjust max index if the maximum element was at the start
    }

    if (max != end) {
        swap(&array[end], &array[max]);
    }

    binaryRecursiveSelectionSort(array, start + 1, end - 1);
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

    binaryRecursiveSelectionSort(data, 0, size - 1);

    printf("\nSorted Array in Ascending Order:\n");
    printArray(data, size);

    return 0;
}