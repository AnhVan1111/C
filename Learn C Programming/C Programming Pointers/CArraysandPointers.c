#include <stdio.h>
/*int main() {
    int x[4];
    int i;

    for (i = 0; i < 4; ++i) {
        printf("&x[%d] = %p\n", i, &x[i]);
    }
    printf("Address of array x: %p", x);  
}*/

// Ex: Pointers and Arrays
int main() {
    int i, x[6], sum = 0;
    printf("Enter 6 numbers:\n");

    for (i = 0; i < 6; ++i) {
        scanf("%d", x + i); // Equivalent to scanf("%d", &x[i]);
        sum += *(x + i);  // Equivalent to sum += x[i]
    }
    printf("Sum = %d", sum);
    return 0;
}

// Ex: Arrays and Pointers
/*int main() {
    int x[5] = {1, 2, 3, 4, 5};
    int* ptr;
    ptr = &x[3];
    printf("*ptr = %d\n", *ptr);
    printf("*(ptr + 1) = %d \n", *(ptr + 1));
    printf("*(ptr - 1) = %d", *(ptr - 1));
    
    return 0;
}*/