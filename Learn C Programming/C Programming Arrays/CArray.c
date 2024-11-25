#include <stdio.h>
#include <math.h>
// Ex: Array Input/Output
/*int main() {
    int value[5];
    printf("Enter 5 integer: ");

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &value[i]);
    }
    printf("Displaying integer: ");

    for (int i = 0; i < 5; ++i) {
        printf("%d\n", value[i]);
    }
    return 0;
}*/

// Ex: Calculate Average
int main() {
    int marks[5], i, n, sum = 0;
    double average;

    printf("Enter number of element: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &marks[i]);
        
        sum += marks[i];
    }
    average = (double) sum / n;

    printf("Average = %.2lf", average);

    return 0;
}