#include <stdio.h>
#include <stdlib.h>
void primeFactorization(int n) {
    if (n == 1) { //This line compares the value of n with 1. It takes constant time, so the time complexity is O(1).
        return;
    }

    for (int i = 2; i <= n; i++) { //This line initializes a loop that iterates from i = 2 to n. The number of iterations depends on the value of n, so the time complexity of this line is O(n).
        if (n % i == 0) { //This line checks if i is a factor of n by performing a modulo operation. It takes constant time, O(1).
            if (n / i == 1) { //This line checks if n divided by i is equal to 1. It takes constant time, O(1).
                printf("%d", i); // This line prints the value of i. It takes constant time, O(1).
                break;
            }
            printf("%d * ", i); //This line prints the value of i followed by a multiplication symbol and a space. It takes constant time, O(1).
            primeFactorization(n / i); //This line is a recursive call to the primeFactorization function with a reduced value of n. The time complexity of the recursive call depends on the size of the reduced value n / i.
            break;
        }
    }    
}
/*function primeFactorization(n)
    if n equals 1 then
        return
    end if
    for i = 2 to n do
        if n modulo i equals 0 then
            if n divide i equals 1 then
                printf i 
                break
            end if
        end if
        printf i * 
        primeFactorization(n / i)
        break
    end for
end function*/

int main() {
    int n; //O(1), as it only initializes an integer variable n.
    printf("Enter a natural number: "); //O(1), as it only prints a string of characters.
    scanf("%d", &n); //O(1), as it only reads an integer value from the user.

    printf("Prime factors of %d: ", n); //O(1), as it only prints a string of characters.
    primeFactorization(n); /*This is a function call to calculate the prime factors of n. 
The complexity of this function depends on the algorithm used in primeFactorization. 
Assuming that primeFactorization uses the most optimized algorithm to find prime factors, the complexity could be O(sqrt(n)), where n is the value of n.*/
    printf("\n"); //O(1), as it only prints a newline character.
    return 0; //O(1), as it only returns the value 0.
}
/*function main() 
    n
    printf "Enter a natural number: "
    read n
    printf n, "Prime factor of "
    primeFactorization(n)
    printf "\n"
    return 0
end function*/


/*
1. Best Scenario Complexity:
In the best scenario, the input number n is a prime number. 
In this case, the for loop in the primeFactorization function will only run once, and the condition n % i == 0 will never be true.
Therefore, the program will immediately return without any iterations. In this case, the time complexity is constant, O(1).

2. Worst Scenario Complexity:
In the worst scenario, the input number n is a large composite number with many prime factors.
In this case, the for loop in the primeFactorization function will iterate from 2 to n, checking each number for divisibility. 
The maximum number of iterations will be n-2 because the loop starts from i=2. 
Additionally, if n is a power of a prime number, the loop will break when n / i becomes 1. 
Overall, the worst-case time complexity is O(n).

3. Average Scenario Complexity:
The average scenario complexity depends on the distribution of numbers and the likelihood of encountering prime numbers as inputs.
If we assume a uniform distribution of inputs, then on average, half of the numbers will be even and divisible by 2, resulting in a complexity of O(n/2) or O(n). 
However, if we consider the prime number theorem, which states that the density of prime numbers among natural numbers approaches 1 / ln(n), the average time complexity can be approximated as O(n / ln(n)).*/