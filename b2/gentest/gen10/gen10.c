#include <stdio.h>

/*int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}*/
// recursive function
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
void findCoPrime(int arr[], int size) {
    printf("List of co-prime numbers:\n");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (gcd(arr[i], arr[j]) == 1) {
                printf("(%d, %d), ", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {2, 10, 27, 13, 90, 45, 5, 26, 49, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    findCoPrime(arr, size);
    return 0;
}