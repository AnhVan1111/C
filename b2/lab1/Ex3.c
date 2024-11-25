// Ex3: Write a structure to represent complex numbers and complete operators: add and multiply.
#include <stdio.h>

struct complexNumber {
    float real;
    float imag;
};

struct complexNumber add(struct complexNumber a, struct complexNumber b);
struct complexNumber mutilply(struct complexNumber a, struct complexNumber b);

int main() {
    struct complexNumber a, b, Sum, Product;

    printf("For the 1st complex number:\n");
    printf("Enter a real part: ");
    scanf("%f", &a.real);
    printf("Enter a imag part: ");
    scanf("%f", &a.imag);

    printf("\nFor the 2nd complex number:\n");
    printf("Enter a real part: ");
    scanf("%f", &b.real);
    printf("Enter a imag part: ");
    scanf("%f", &b.imag);

    printf("\nResult:\n");

    Sum = add(a, b);
    printf("Sum = %.1f + (%.1f)i", Sum.real, Sum.imag);

    Product = mutilply(a, b);
    printf("\nProduct = %.1f + (%.1f)i", Product.real, Product.imag);

    return 0;
}

struct complexNumber add(struct complexNumber a, struct complexNumber b) {
    struct complexNumber result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}
struct complexNumber mutilply(struct complexNumber a, struct complexNumber b) {
    struct complexNumber result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}