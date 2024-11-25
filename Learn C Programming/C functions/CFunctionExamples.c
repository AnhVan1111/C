#include <stdio.h>
#include <math.h>
// Ex: Program to Display Prime Numbers Between Intervals Using Function
/*int checkPrimeNumbers(int n);

int main() {
    int n1, n2, i, flag;

    printf("Enter a positive integer n1: ");
    scanf("%d", &n1);
    printf("Enter a positive integer n2: ");
    scanf("%d", &n2);

    if(n1 > n2) {
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
    printf("Prime numbers between %d and %d: ", n1, n2);

    for (i = n1 + 1; i < n2; ++i) {
        flag = checkPrimeNumbers(i);

        if(flag == 1) {
            printf("%d", i);
        }
    }
    return 0;
}

int checkPrimeNumbers(int n) {
    int k, flag = 1;

    for (k = 2; k <= n/2; ++k) {
        if(n%k == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}*/

// Ex: Program to Check Prime or Armstrong Number Using User-defined Function
/*int checkPrimeNumber(int n);
int checkArmstrongNumber(int num);

int main() {
    int n, flag;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    flag = checkPrimeNumber(n);
    if(flag == 1) {
        printf("%d is a prime number.\n", n);
    }
    else {
        printf("%d is not a prime number.\n", n);
    }

    flag = checkArmstrongNumber(n);
    if(flag == 1) {
        printf("%d is a Armstrong number.", n);
    }
    else {
        printf("%d is not a Armstrong number,", n);
    }

    return 0;
}

int checkPrimeNumber(int n) {
    int i, flag = 1, squareRoot;

    squareRoot = sqrt(n);

    for (i = 2; i <= squareRoot; ++i) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }
    
    return flag;
}

int checkArmstrongNumber(int num) {
    int OriginNumber, remainder, i = 0, flag;
    double result = 0.0;

    for (OriginNumber = num; OriginNumber != 0; ++i) {
        OriginNumber /= 10;
    }
    for (OriginNumber = num; OriginNumber != 0; OriginNumber /= 10) {
        
        remainder = OriginNumber % 10;

        result += pow(remainder, i);
    }
    if(round(result) == num) {
        flag = 1;
    }
    else {
        flag = 0;
    }
    
    return flag;
}*/

// Ex: Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers
/*int checkPrime(int n);

int main() {
    int n, i, flag = 0;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    for (i = 2; i <= n/2; ++i) {
        if(checkPrime(i) == 1) {
            if (checkPrime(n - i) == 1) {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            } 
        }
    }
    if (flag == 0) {
        printf("%d cannot be expressed as sum of two Prime numbers.", n);
    }
    return 0;
}

int checkPrime(int n) {
    int i, flag = 1;

    if (n == 0 || n == 1) {
        flag = 0;
    }
    else {
        for (i = 2; i <= n/2; ++i) {
            if(n % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}*/

// Ex: rogram to Find the Sum of Natural Numbers using Recursion
/*int addNumber(int n);

int main() {
    int n, result;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = addNumber(n);
    printf("sum = %d", result);

    return 0;
}

int addNumber(int n) {
    if (n != 0) {
        return n + addNumber(n - 1);
    }
    else {
        return n;
    }  
}*/

// Ex: Program to Find Factorial of a Number Using Recursion
/*long int MultiplyNumber(int n);

int main() {
    int n, result;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = MultiplyNumber(n);
    printf("Factorial of %d is: %ld", n, result );
    
    return 0;
}

long int MultiplyNumber(int n) {
    if (n >= 1) {
        return n *  MultiplyNumber(n - 1);
    }
    else {
        return 1;
    }  
}*/

// Ex: Program to Find G.C.D Using Recursion
/*int hcf(int a, int b);

int main() {
    int a, b, result;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    result = hcf(a, b);
    printf("GCD of %d and %d is %d", a, b, result);

    return 0;
}

int hcf(int a, int b) {
    if(b != 0) {
        return hcf(b, a % b);
    }
    else {
        return a;
    }
}*/

// Ex: Program to Convert Binary Number to Decimal and vice-versa
    // C Program to Convert Binary Number to Decimal
/*int convert(long long n);

int main() {
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n, convert(n));

    return 0;
}

int convert(long long n) {
    int dec = 0, i = 0, rem;

    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}*/

    // C Program to convert decimal number to binary
/*long long convert(int n);

int main() {
    int n;
    long long bin;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    bin = convert(n);

    printf("%d in decimal = %lld in binary", n, bin);

    return 0;
}

long long convert(int n) {
    long long bin = 0;
    int rem, i = 1;

    while(n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}*/

// Ex: Program to Convert Octal Number to Decimal and vice-versa
    // Program to Convert Decimal to Octal
/*int convertDecimalToOctal(int decimalNumber);

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    printf("%d in decimal = %d in octal", decimalNumber, convertDecimalToOctal(decimalNumber));
    
    return 0;
}
int convertDecimalToOctal(int decimalNumber) {
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}*/

    // Program to Convert Octal to Decimal
/*long long convertOctalToDecimal(int octalNumber);

int main() {
    int octalNumber;

    printf("Enter a octal number: ");
    scanf("%d", &octalNumber);
    printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}

long long convertOctalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;

    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8,i);
        ++i;
        octalNumber /= 10;
    }

    i = 1;

    return decimalNumber;   
}*/

    // Check for Octal Number and Convert it to Decimal
/*int checkOctal(int octalNumber);
long long convertOctalToDecimal(int octalNumber);

int main() {
    int octalNumber;
    int condition;

    do {
        printf("Enter a octal number: ");
        scanf("%d", &octalNumber);
        
        condition = checkOctal(octalNumber);

        if (!condition) {
            printf("%d is not a Octal number!\n", octalNumber);
        }
    } 
    while (condition == 0);
    
    printf("%d in Octal = %lld in Decimal", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}

int checkOctal(int octalNumber) {
    int remainder;

    while (octalNumber != 0) {
        remainder = octalNumber % 10;
        if (remainder >= 8) {
            return 0;
        }
        octalNumber /= 10;
    }
    return 1;
}

long long convertOctalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;

    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8,i);
        ++i;
        octalNumber /= 10;
    }

    i = 1;

    return decimalNumber;
}*/

// Ex: Program to Reverse a Sentence Using Recursion
/*void reverseSentence();

int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    } 
}*/

// Ex: program to calculate the power using recursion
int power(int n1, int n2);

int main() {
    int base, a, result;

    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);

    return 0;
}

int power(int base, int a) {
    if (a != 0) {
        return (base * power(base, a - 1));
    }
    else {
        return 1;
    }
}
