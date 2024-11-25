#include <stdio.h>
// Ex 3: Write a C program to SWAP the values of two variables without using a third one.
int main() {
    int a , b;
    printf("Input 2 number:\n");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a,b);
    

    a = a - b;
    b = a + b;
    a = b - a;


    printf("After swapping: a = %d, b = %d", a,b);

    return 0;

}