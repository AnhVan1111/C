#include <stdio.h>
// Ex: Pass Individual Array Elements
/*void display(int age1, int age2) {
    printf("%d\n", age1);
    printf("%d", age2);
}
int main() {
    int ageArray[] = {2, 8, 4, 12};
    display(ageArray[0], ageArray[2]);
    return 0;
}*/

// Ex: Pass Arrays to Functions
/*float CalculateSum(float num[]);

int main() {
    float result, num[] = {2, 5, 8, 9, 5.5, 6.9};
    result = CalculateSum(num);
    printf("Result = %.2f", result);
    return 0;
}

float CalculateSum(float num[]) {
    float sum = 0.0;
    for (int i = 0; i < 6; ++i) {
        sum += num[i];
    }
    return sum;  
}*/

// Ex: Pass two-dimensional arrays
void displayNumbers(int num[2][2]);

int main() {
    int num[2][2];
    printf("Enter 4 numbers:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("num[%d][%d] = ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
    displayNumbers(num);
    return 0;
}

void displayNumbers (int num[2][2]) {
    printf("Displaying:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("num[%d][%d] = %d\n", i, j, num[i][j]);
        }  
    }  
}

