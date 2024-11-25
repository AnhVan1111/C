#include <stdio.h>
/*int main() {
    int i;

    for(i = 1; i < 11; ++i) {
        printf("%d, ", i);
    }
    return 0;
}*/

int main() {
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(count = 1; count <= num; ++count) {
        sum += count;
    }
    printf("sum = %d", sum);

    return 0;
}