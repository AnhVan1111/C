#include<stdio.h>
/*Ex2: Write a C program to enter a natural number n (n > 1), and find all the prime
numbers from 1 to n */  

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d is: 1", n);

    for(int i = 2; i <= n; i++) {
        int count = 0;
        for (int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                count++;
                break;
            }
        }
        if (count == 0) {
            printf("%d", i);
        }
    }
    return 0;
}