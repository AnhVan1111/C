#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Ex: Store Numbers and Calculate Average Using Arrays
/*int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the number of elemnet: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error!!! Number should in range of (1 - 100)\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    avg = sum / n;
    printf("Average = %.2f", avg);

    return 0;   
}*/

// Ex: Program to Find Largest Element in an Array
/*int main() {
    int n, i;
    double arr[100];

    printf("Enter the number of element: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter number%d = ", i + 1);
        scanf("%lf", &arr[i]);
    }
    for (i = 0; i <n; ++i) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }
    printf("Largest number = %.2lf", arr[0]);

    return 0;
}*/

// Ex: Population Standard Deviation
/*float calculatedSD(float data[]);

int main() {
    int i;
    float data[10];
    printf("Enter 10 element: ");
    for (i = 0; i < 10; ++i) {
        scanf("%f", &data[i]);
    }
    printf("\nStandard Deviation = %.6f", calculatedSD(data));

    return 0;
}

float calculatedSD(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i) {
        sum += data[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 10);    
}*/

// Ex: Program to Add Two Matrices Using Multi-dimensional Arrays
/*int main() {
    int row, column, a[100][100], b[100][100], sum[100][100];
    printf("Enter the number of row: ");
    scanf("%d", &row);
    printf("Enter the number of column: ");
    scanf("%d", &column);

    printf("Enter elements of 1st matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("Enter elemnet of a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elemnet of 2nd matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("Enter element of b[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of 2 matrix: \n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d  ", sum[i][j]);
            if (j == column - 1 ) {
                printf("\n");
            }
        }
    }
    return 0;
}*/

// Ex: Program to Multiply Two Matrices Using Multi-dimensional Arrays
/*void GetMatrixElement(int matrix[][10], int row, int column) {
    printf("\nEnter element:\n");

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("Enter elemnet a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }   
    } 
}
void MultiplyMatrix(int first[][10], int second[][10], int result[][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < r1; ++k) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}
void displayMatrix(int result[][10], int row, int column) {
    printf("\nOutput Matrix: \n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d  ", result[i][j]);
            if (j == column - 1) {
                printf("\n");
            }
        }
    }
}
int main() {
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
    printf("Enter rows for the 1st matrix: ");
    scanf("%d", &r1);
    printf("Enter columns for the 1st matrix: ");
    scanf("%d", &c1);
    printf("Enter rows for the 2nd matrix: ");
    scanf("%d", &r2);
    printf("Enter columns for the 2nd matrix: ");
    scanf("%d", &c2);

    while (c1 != r2) {
        printf("Error!!! Please enter rows and coulumns again\n");
        printf("Enter rows for the 1st matrix: ");
        scanf("%d", &r1);
        printf("Enter columns for the 1st matrix: ");
        scanf("%d", &c1);
        printf("Enter rows for the 2nd matrix: ");
        scanf("%d", &r2);
        printf("Enter columns for the 2nd matrix: ");
        scanf("%d", &c2);
    }

    GetMatrixElement(first, r1, c1);

    GetMatrixElement(second, r2, c2);

    MultiplyMatrix(first, second, result, r1, c1, r2, c2);

    displayMatrix(result, r1, c2);
    
    return 0;
}*/

// Ex: Program to Find Transpose of a Matrix
int main() {
    int i, j, transpose[10][10], a[10][10], row, column;
    printf("Enter rows: ");
    scanf("%d", &row);
    printf("Enter coulumns: ");
    scanf("%d", &column);
    
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n0Enter matrix:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            printf("%d  ", a[i][j]);
            if (j == column - 1) {
                printf("\n");
            }
        }
    }

    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < column; ++i) {
        for (j = 0; j < row; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == row - 1) {
                printf("\n");
            }
        }
    }

    return 0;    
}
