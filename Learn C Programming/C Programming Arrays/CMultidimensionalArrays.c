#include <stdio.h>
// Ex: Two-dimensional array to store and print values
/*const int City = 2;
const int Week = 7;

int main() {
    int temperature[City][Week];

    for (int i = 0; i < City; ++i) {
        for (int j = 0; j < Week; ++j) {
            printf("City%d and Week%d: ", i + 1, j + 1);
            scanf("%d", &temperature[i][j]);
        }
    }
    printf("\nDisplaying Values: \n\n");

    for (int i = 0; i < City; ++i) {
        for (int j = 0; j < Week; ++j) {
            printf("City%d and Week%d: %d\n", i + 1, j + 1, temperature[i][j]);
        }
    }
    return 0;
}*/

// Ex: Sum of two matrices
int main() {
    float result[2][2], a[2][2], b[2][2];

    printf("Enter element of 1st matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Enter element of 2nd matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%f", &b[i][j]);
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {

            result[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("\nSum of matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%.1f\t", result[i][j]);
            if (j == 1) {
                printf("\n");
            }
        }
    }
    return 0;
}

// Ex: Three-dimensional array
/*int main() {
    int test[2][3][2];

    printf("Enter 12 numbers:\n");

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                printf("test[%d][%d][%d] = ", i, j, k);
                scanf("%d", &test[i][j][k]);
            }
        }
    }
    printf("\nDisplaying values:\n\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
            }
        }
    }
    return 0;
}*/