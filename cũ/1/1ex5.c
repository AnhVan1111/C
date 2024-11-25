#include <stdio.h>
// Ex 5: Write a C program to calculate a value of a polynomial 𝑎𝑥^2+bx+c with three known constant parameters a=1, b=2, and c=1 and the variable 𝑥 input from the keyboard
int main(){
    int a = 1;
    int b = 2;
    int c = 1;
    double x;
    scanf("%lf", &x);

    double myPoly = a*x*x + b*x + c;
    printf("%.2lf", myPoly);

    return 0;
}