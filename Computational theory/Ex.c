#include <stdio.h>

int find_max(int sequence[], int length) {
    // Initialize max_value to the first element of the sequence
    int max_value = sequence[0];
    
    // Iterate through each element in the sequence
    for (int i = 1; i < length; i++) {
        // Update max_value if current element is greater
        if (sequence[i] > max_value) {
            max_value = sequence[i];
        }
    }
    
    return max_value;
}

int main() {
    // Example sequence
    int sequence[] = {5, 8, 2, 10, 3, 6};
    int length = sizeof(sequence) / sizeof(sequence[0]);
    
    // Find maximum element
    int max_element = find_max(sequence, length);
    
    // Print maximum element
    printf("Maximum element: %d\n", max_element);
    
    return 0;
}
