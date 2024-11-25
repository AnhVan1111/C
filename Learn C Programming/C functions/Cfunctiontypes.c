#include <stdio.h>
// Types of User-defined Functions in C Programming

// Ex: No Argument Passed and No Return Value
/*void checkPrimeNumber();

int main() {
    checkPrimeNumber();
    return 0;
}

void checkPrimeNumber() {
    int n, i, flag = 1;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n == 0 || n == 1) { 
        flag = 0;
    }
    
    for(i = 2; i <= n/2; ++i) {
        if(n%i == 0) {
            flag = 0;
            break;
        }
    }
    
    if(flag == 0) 
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
}*/

// Ex: No Arguments Passed But Returns a Value.
/*int getInteger();

int main() {
    int n, i, flag = 0;

    n = getInteger();

    if(n == 0 || n == 1) {
        flag = 1;
    }
    for (i = 2; i <= n/2; ++i){
        if(n%i == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) {
        printf("%d is not a prime number.", n);
    }
    else {
        printf("%d is a prime number.", n);
    }
}

int getInteger() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    return n;
}*/

// Ex: Argument Passed But No Return Value
/*void checkPrimeNumber(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    checkPrimeNumber(n);

    return 0;
}

void checkPrimeNumber(int n) {
    int i, flag = 0;

    if(n == 0 || n == 1) {
        flag = 1;
    }

    for (i = 2; i <= n/2; ++i) {
        if(n%i == 0);
            flag = 1;
            break;
    }
    if(flag == 1) {
        printf("%d is not a prime number.", n);
    }
    else {
        printf("%d is a prime number.", n);
    }
}*/

// Ex: Argument Passed and Returns a Value
int checkPrimeNumber(int n);

int main() {
    int n, flag;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    flag = checkPrimeNumber(n);

    if(flag == 0) {
        printf("%d is not a prime number.", n);
    }
    else {
        printf("%d is a prime number.", n);
    }
}

int checkPrimeNumber(int n) {
    if(n == 0 || n == 1) {
        return 0;
    }
    int i;
    
    for (i = 2; i <= n/2; ++i) {
        if(n%i == 0) {
            return 0;
        }
    }
    return 1;     
}