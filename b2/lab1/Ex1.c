#include <stdio.h>
// Ex1: Write a simple program in C to multiply two variables in C using pointers.
int main() {
    float* product, a, b, p;
    product = &p;

    printf("Enter number a: ");
    scanf("%f", &a);
    printf("Enter number b: ");
    scanf("%f", &b);

    p = a * b; 
    printf("%.1f * %.1f = %.1f", a, b, *product);

    return 0;
}
