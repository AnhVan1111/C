#include <stdio.h>
// Ex2: Complete this given function void findMax(int* max, int a), which assigns a value a to max if a>max.
void findMax(int* max, int a) {
    if (a > *max) {
        *max = a;
    }
}
int main() {
    int max = 0;
    int values[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &values[i]);
        findMax(&max, values[i]);
    }
    printf("max = %d", max);

    return 0;
}