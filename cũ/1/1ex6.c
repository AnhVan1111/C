#include <math.h>
#include <stdio.h>
// Ex 6: Use math functions in C standard library to calculate a value of the following expression 3𝑎 − 𝑏^3 − 2√𝑐 with three parameters a, b, and c input from the keyboard.
int main() {
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%.2lf", 3*a - b*b*b - 2*sqrt(c));

    return 0;

}

