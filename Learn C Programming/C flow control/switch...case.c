#include <stdio.h>

int main() {
    char operation;
    double n1, n2;

    printf("Enter an operation(+, -, *, /)",operation);
    scanf("%c", &operation);
    printf("Enter two num:", n1, n2);
    scanf("%lf %lf", &n1, &n2);

    switch (operation) 
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
            break;
        
        default:
            printf("Error!!! Operater is not correct");
            break;
        }

    return 0;
}