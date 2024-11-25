#include <stdio.h>


//pseudo-code using Recursion
/*function sum(n)
    while n not equals 0 do
        return n + sum(n - 1)
    end while
    if n == 0
        return n
    end if
end function*/
int sum(int n) { 
    while (n != 0) { /*This line is loop to check value n not equal 0. 
                    It take constant time, so the time complexity is O(1)*/
        return n + sum(n - 1);
    }
    if (n == 0) { // This line to check if n equal 0, so it take constant time and the time complexity is O(1)
        return n; // O(1), as it only returns the value n.
    }
}
int main() {
    int n; //O(1), as it only initializes an integer variable n.
    printf("Enter positive value: "); //O(1), as it only prints a string of characters.
    scanf("%d", &n); // O(1), as it only reads an integer value from the user. 
    int triangularNumembers = sum(n); /*This function call to sum the triangular number of n. 
The complexity of this function depends on the algorithm used in primeFactorization. The complexity could be O(n) or O(log n)*/
    printf("f(%d) = %d", n, triangularNumembers); // O(1), as it only prints a string of characters

    return 0; //O(1), as it only returns the value 0.
}
//T(n) = O(n)