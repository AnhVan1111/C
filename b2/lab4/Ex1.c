#include <stdio.h>
#include <string.h>
int calculateDigitSum(int num) {
    if (num < 10) {      //T(n) = 1
        return num;      //T(n) = 1
    }
    else {
        return (num % 10) + calculateDigitSum(num / 10);    //T(n) = 1 + n/10
    }
}
//T(n) = 1 + 1 + n/10

int main() {
    int sum = 0;                    //T(n) = 1
    
    // iteration
    int num;                        //T(n) = 1       
    printf("Enter the number: ");   //T(n) = 1
    scanf("%d", &num);              //T(n) = 1
    while (num > 0) {               //T(n) = 1
        sum += num %10;             //T(n) = 1
        num = num / 10;             //T(n) = 1       
    }
    printf("sum = %d", sum);        //T(n) = 1
    // //T(n) = 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1
    /* Pseudocode iteration
    Declare variable num     
    Print "Enter the number: "     
    Read num     
    Initialize sum to 0     
    while num > 0:     
        Add num % 10 to sum     
        Divide num by 10 
    end while    
    Print "sum = " followed by the value of sum */ 

    //recursion
    int n;                                              //T(n) = 1
    printf("Enter the number: ");                       //T(n) = 1
    scanf("%d", &n);                                    //T(n) = 1
    sum = calculateDigitSum(n);     
    printf("Amounnt of number %d is %d", n, sum);       //T(n) = 1
    // //T(n) = 1 + 1 + 1 + 1
    return 0;
}
// T(n) = n/10 = O(log n)