#include <stdio.h>
/* Ex3: Enter a integer number n and calculate the sum of a series : 1 + 1/2 + 1/3 +...+1/n*/

int main() {
    int n=3;
    float sum = 0.0;
    for (float i = 1; i <= n; i++) {
        sum += 1.0/i;
    }
    printf("Sum of number from 1 to n: %f", sum);
    return 0;
}