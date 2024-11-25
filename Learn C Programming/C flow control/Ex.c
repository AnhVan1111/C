#include <stdio.h>
#include <math.h>
// Ex: Program to check even or odd
/*int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("%d is even number", num);
    }
    else {
        printf("%d is odd number", num);
    }

    return 0;
}*/ //can used the ternary operater (?...:) instead of the (if...else)

// Ex: Program to Check Vowel or consonant
/*int main() {
    char c;
    int lowcase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    lowcase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(lowcase_vowel || uppercase_vowel) {
        printf("%c is a vowel", c);
    }
    else {
        printf("%c is a consonant", c);
    }
    return 0;
}*/

// Ex: Program to Find the Largest Number Among Three Numbers
/*int main() {
    double n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if( n1 > n2 && n1 > n3) {
        printf("%.2lf is the greatest numbers.", n1);
    }
    else if (n2 > n1 && n2 > n3) {
        printf("%.2lf is the greatest numbers.", n2);
    }
    else {
        printf("%.2lf is the greatest numbers.", n3);
    }
    return 0;  
}*/

// Ex: Program to Find the Roots of a Quadratic Equation
/*int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagePart;
    printf("Enter coefficients a, b and c:");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if(discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf", root1);
    }
    else {
        realPart = - b / (2 * a);
        imagePart = (sqrt(-discriminant)) / (2 * a);
        printf("root1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi", realPart, imagePart, realPart, imagePart);
    }

    return 0;
    
}*/

// Ex: Program to Check Leap Year
/*int main() {
    int year;
    printf("Enter a year:");
    scanf("%d", &year);

    if(year % 400 == 0) {
        printf("%d is a leap year.", year);
    }
    else if (year % 100 == 0) {
        printf("%d is not a leap year.", year);
    }
    else if (year % 4 == 0) {
        printf("%d is a leap year", year);
    }
    else {
        printf("%d is not a leap year", year);
    }
    return 0;
}*/

// Ex: Program to Check Whether a Number is Positive or Negative or Zero
/*int main() {

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    } 
    else
        printf("You entered a positive number.");

    return 0;
}*/

// Ex: Program to Check Whether a Character is an Alphabet or not
/*int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("%c is belong to alphabet", c);
    }
    else {
        printf("%c is not belong to alphabet", c);
    }
    return 0;
}*/

// Ex: Program to Calculate the Sum of Natural Numbers
/*int main() {
    int n, i, sum = 0;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &n);
    } while (n <= 0);

    for(i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("sum = %d", sum);

    return 0;   
}*/

// Ex: Program to Find Factorial of a Number
/*int main() {
    int n, i;
    unsigned long long fact = 1; // Since the factorial of a number may be very large, the type of factorial variable is declared as unsigned long long
    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Error!!! factorial of a negative number doesn't exist.");
    }
    else {
        for(i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("factorial of %d = %llu", n, fact);
    }
    return 0;
}*/

// Ex: Program to Generate Multiplication Table
/*int main() {
    int n, i, range;
    printf("Enter an integer: ");
    scanf("%d", &n);

    do {
        printf("Enter a positive range: ");
        scanf("%d", &range);
    } while (range <= 0);

    for (i = 1; i <= range; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;    
}*/

// Ex: Program to Display Fibonacci Sequence
    // Fibonacci Series up to n terms
/*int main() {
    int n, i;

    int t1 = 0, t2 = 1;

    int NextTerm = t1 + t2;

    printf("Enter the number of term: ");
    scanf("%d", &n);
    printf("Fibonacci Series of %d: %d, %d, ",n, t1, t2);

    for (i = 3; i <= n; ++i) {
        printf("%d, ", NextTerm);
        t1 = t2;
        t2 = NextTerm;
        NextTerm = t1 + t2;
    }

    return 0; 
}*/

    // Fibonacci Sequence Up to a Certain Number
/*int main() {
    int n, t1 = 0, t2 = 1, NextTerm = 0;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    NextTerm = t1 + t2;

    while (NextTerm <= n) {
        printf("%d, ", NextTerm);
        t1 = t2;
        t2 = NextTerm;
        NextTerm = t1 + t2;
    }
    
    return 0;   
}*/

// Ex: Program to Find GCD or HCF of two Numbers
    // GCD Using for loop and if Statement
/*int main() {
    int n1, n2, i, gcd;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }   
    }
    printf("gcd = %d ", gcd);

    return 0;
}*/

    // GCD Using while loop and if...else Statement
/*int main() {
    int n1, n2, i, gcd;
    printf("Enter two positive integer: ");
    scanf("%d %d", &n1, &n2);

    while (n1 != n2) {
        if(n1 > n2) {
            n1 -= n2;
        }
        else {
            n2 -= n1;
        }
    }
    printf("GCD = %d", n1);

    return 0;
}*/
    // GCD for both positive and negative numbers
/*int main() {
    int n1, n2, i, gcd;
    printf("Enter two integer: ");
    scanf("%d %d", &n1, &n2);

    n1 = (n1 > 0) ? n1 : -n1;
    n2 = (n2 > 0) ? n2 : -n2;

    while(n1 != n2) {
        if(n1 > n2) {
            n1 -= n2;
        }
        else {
            n2 -= n1;
        }
    }
    printf("GCD is %d", n1);

    return 0;
}*/

// Ex: Program to Find LCM of two Numbers
    // LCM using while and if
/*int main() {
    int n1, n2, max;

    printf("Enter positive integer n1: ");
    scanf("%d", &n1);
    printf("Enter positive integer n2: ");
    scanf("%d", &n2);

    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}*/

    // LCM Calculation Using GCD, formula: LCM = (num1 * num2) / GCD
/*int main() {
    int n1, n2, i, gcd, lcm;

    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
    lcm = (n1 * n2 ) / gcd;
    printf("The LCM of %d and %d is %d", n1, n2, lcm);

    return 0;
}*/

// Ex: Program to Display Characters from A to Z Using Loop
    // Program to Print English Alphabets
/*int main() {
    char c;
    for (c = 'A'; c <= 'Z'; ++c) {
        printf("%c ", c);
    }

    return 0;
}*/

    // Print Lowercase/Uppercase alphabets
/*int main() {
    char c;
    printf("Enter a to display lowercase alphabets.\n");
    printf("Enter A to display uppercase alphabets.\n");
    printf("Enter a or A: ");
    scanf("%c", &c);
    
    if (c == 'a') {
        for (c = 'a'; c <= 'z'; ++c) {
            printf("%c ", c);
        }
    }
    else if (c == 'A') {
        for (c = 'A'; c <= 'Z'; ++c) {
            printf("%c ", c);
        }
    }
    else {
        printf("Error!!!!");
    }
    return 0;
}*/

// Ex: Program to Count Number of Digits in an Integer
/*int main() {
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);

    do {
       n /= 10;
       ++count;
    } while (n != 0);

    printf("Number of digits: %d", count);

    return 0;
}*/

// Ex: Program to Reverse a Number
/*int main() {
    int n, reverse = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    printf("Reverse number = %d", reverse);

    return 0;
}*/

// Ex: Program to Calculate the Power of a Number
    // Power of a Number Using the while Loop
/*int main() {
    int base, exp;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %.0Lf", result);
    return 0;
}*/

    // Power Using pow() Function
/*int main() {
    double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter a exponent number: ");
    scanf("%lf", &exp);

    result = pow(base, exp);

    printf("Answer = %.1lf^%.1lf = %.2lf", base, exp, result);
    return 0;
}*/

// Ex: Program to Check Whether a Number is Palindrome or Not
/*int main() {
    int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed) {
        printf("%d is a palindrome", original);
    }
    else {
        printf("%d is not a palindrome", original);
    }
    return 0;
}*/

// Ex: Program to Check Whether a Number is Prime or Not
/*int main() {
    int n, i, flag = 0;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        flag = 1;
    }

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%d is a prime number.", n);
    }
    else {
        printf("%d is not a prime number.", n);
    }

    return 0;
}*/

// Ex: Program to Display Prime Numbers Between Two Intervals
    // Display Prime Numbers Between Two Intervals
/*int main() {
    int low, high, i, n, flag;
    printf("Enter two number(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Primes number between %d and %d are: ", low, high);

    while (low < high) {
        flag = 0;
        if (low <= 1) {
            ++low;
            continue;
        }
        for (i = 2; i <= low / 2 ; ++i) {
            if (low % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d  ", low);
        }
        ++low;        
    }
    return 0;
}*/

    // Display Prime Numbers when Larger Number is Entered first
/*int main() {
    int low, high, i, flag, temp;
    printf("Enter two number(interval): ");
    scanf("%d %d", &low, &high);
    
    if (low > high) {
        temp = low;
        low = high;
        high = temp;
    }
    printf("Primes number between %d and %d are: ", low, high);

    while (low < high) {
        flag = 0;
        if(low <= 1) {
            ++low;
            continue;
        }
        for (i = 2; i <= low / 2; ++i) {
            if (low % i == 0) {
                flag = 1;
                break;
            }      
        }
        if (flag == 0) {
            printf("%d ", low);
        }
        ++low;
    }
    return 0;
}*/

// Ex: Program to Check Armstrong Number
    // Check Armstrong Number of three digits
/*int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digits integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if (result == num) {
        printf("%d is a Armstrong number", num);
    }
    else {
        printf("%d is not a Armstrong number", num);
    }
    return 0;
}*/

    // Check Armstrong Number of n digits
/*int main() {
    int num, originalNum, remainder, i = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    for (originalNum = num; originalNum != 0; ++i) {
        originalNum /= 10;
    }
    for (originalNum = num; originalNum != 0; ++i) {
        remainder = originalNum % 10;
        result += pow(remainder, i);
    }
    if (result == num) {
        printf("%d is a Armstrong number.", num);
    }
    else {
        printf("%d is not a Armstrong number.", num);
    }
    return 0;
}*/

// Ex: Program to Display Factors of a Number
/*int main() {
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);

    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}*/

// Ex: Program to Make a Simple Calculator Using switch...case
/*int main() {
    char op;
    double first, second;
    printf("Enter an operator(+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (op) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
    default:
        printf("Error!!! Operator is not correct.");
    }
    return 0;
}*/

// Ex: Program to Print Pyramids and Patterns
    // Half Pyramid of *
/*int main() {
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

    // Half Pyramid of Numbers
/*int main() {
    int i, j, rows;
    printf("Enter th number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}*/

    // Half Pyramid of Alphabets
/*int main() {
   int i, j;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
}*/
