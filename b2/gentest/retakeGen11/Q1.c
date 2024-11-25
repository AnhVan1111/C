#include <stdio.h>

int countOddDigits(int n) {
    if (n == 0) {
        return 0;
    }
    int lastDigit = n % 10;
    if (lastDigit % 2 != 0) {
        return 1 + countOddDigits(n / 10);
    }
    else {
        return countOddDigits(n / 10);
    }
}
/*function countOddDigits(n)
    if n == 0 then
        return 0
    end if
    lastDigit equals n modulo 10
    if lastDigit modulo 2 not equal 0 then
        return 1 + countOddDigit(n / 10)
    end if
    else
        return countOddDigit(n / 10)
    end else
end function*/
int countEvenDigits(int n) {
    if (n == 0) {
        return 0;
    }
    int lastDigit = n % 10;
    if (lastDigit % 2 == 0) {
        return 1 + countEvenDigits(n / 10);
    }
    else {
        return countEvenDigits(n / 10);
    }   
}
/*function countEvenDigit(n)
    if n == 0 then
        return 0
    end if
    lastDigit equals n modulo 10
    if lastDigit modulo 2 equal 0 then
        return 1 + countEvenDigit(n / 10)
    end if
    else
        return countEvenDigit(n / 10)
    end else
end function*/
int main() {
    int n;
    printf("Positive natural number: ");
    scanf("%d", &n);
    int oddCount = countOddDigits(n);
    int evenCount = countEvenDigits(n);

    printf("Number of odd digits in %d: %d\n", n, oddCount);
    printf("Number of even digits in %d: %d\n", n, evenCount);

    return 0;
}
/*
The complexity of the program can be analyzed as follows:

1. Best Scenario: If N has only one digit, the complexity of both algorithms would be O(1) since the recursive calls will only happen once.
2. Worst Scenario: If N has k digits, the complexity of both algorithms would be O(k) as there would be k recursive calls, each dividing N by 10.
3. Average Scenario: On average, if N has k digits, the complexity of both algorithms would still be O(k) as the number of recursive calls scales with the number of digits in N.*/