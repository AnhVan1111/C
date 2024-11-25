#include <stdio.h>
// Ex: Pass Addresses to Functions
void swap(int * n1, int * n2);

int main() {
    int num1 = 5, num2 = 10;

    swap(&num1, &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);

    return 0;
}

void swap(int * n1, int * n2) {
    int temp; 
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

// Ex: Passing Pointers to Functions
/*void addOne(int * ptr) {
    (*ptr)++;
} 
int main() {
    int * p, i = 10;
    p = &i;
    addOne(p);
    printf("%d", *p);
    return 0;
}*/