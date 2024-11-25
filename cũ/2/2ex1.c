#include <stdio.h>
// Ex 1: Write a C program to convert a temperature form Centigrade to Fahrenheigh
int main() {
    double n;
    printf("Enter the temperature in C:");
    scanf("%lf", &n);
    printf("Enter the temperature in F:%.lf", 1.8*n + 32);

    return 0;

}

