#include <stdio.h>
/* Ex1: Write a C program to enter a natural number n (n > 1), and find all the divisors of n*/
int main() {
    int n, i;
    printf("Enter a natrue # greater than 1:");
    scanf("%d", &n);
    int count = 0;
    printf("Divisors of n:\n");

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
            ++count;
        }    
    }
    printf("Number of divisors: %d", count);

    return 0;


}