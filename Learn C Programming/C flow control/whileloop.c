#include <stdio.h>

/*int main() {
    int i = 1;

    while (i < 5) {
        printf("%d\n", i);
        ++i;
    }
    return 0;
}*/

// Ex: do...while loop
int main () {
    double num, sum = 0;
    do {
        printf("Enter a number: ");
        scanf("%lf", &num);
        sum += num;
    } 
    while (num != 0);

    printf("sum = %.2lf", sum);

    return 0;
}