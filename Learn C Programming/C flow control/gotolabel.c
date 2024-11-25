#include <stdio.h>

int main() {
    const int maxInput = 100; // const : to declare a variable no change
    int i;
    double num, average, sum = 0.0;

    for(i = 1; i <= maxInput; ++i) {
        printf("Enter a number n%d: ", i);
        scanf("%lf", num);

        if(num < 0.0) {
            goto jump;
        }
        sum += num;
    }
jump:
    average = sum / (i - 1);
    printf("sum = %.2lf\n", sum);
    printf("average = %.2lf", average);

    return 0;
}