#include <stdio.h>
// Ex 2: : Given three numbers and write a C program to find the minimum and the maximum among these numbers
/*int main() {
    int n;
    printf("Input the number of element in array:");
    scanf("%d", &n);
    printf("Input the value:");
    int a[n];

    for(int i = 0; i<n; i++) {
        scanf("%d", &a[i]);

    }


    int maxValue = a[0];
    int minValue = a[0];

    for(int i = 0; i<n; i++) {
        if(a[i]>maxValue) {
            maxValue = a[i];
        }
        
        if(a[i]<minValue) {
            minValue = a[i];
        }
    }    
    printf("max value is: %d\n", maxValue);
    printf("min value is: %d\n", minValue);


    return 0;

}   */


//or

int main() {
    int num1, num2, num3, max, min;

    printf("Enter three number:");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = num1;
    if(num2 > max) {
        max = num2;
    }
    if(num3 > max) {
        max = num3;
    }
    min = num1;
    if(num2 < min) {
        min = num2;
    }
    if(num3 < min) {
        min = num3;
    }

    printf("Maximum number is: %d\n", max);
    printf("Minimum number is: %d\n", min);

    return 0;
}


