#include <stdio.h>
// Ex: if statement
/*int main() {
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 1 ) {
        printf("You can entered %d.\n", number);
    }

    printf("The if statement is easy.");

    return 0;
}*/

// Ex: if...else statement
/*int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if(number%2 == 0) {
        printf("%d is an even integer",number);
    }    
    else {
        printf("%d is an odd integer", number);
    }

    return 0;
}*/

// Ex: if...else Ladder
/*int main() {
    int num1, num2;
    printf("Enter integer num1: ");
    scanf("%d", &num1);

    printf("Enter integer num2: ");
    scanf("%d", &num2);

    if(num1 == num2) {
        printf("Result: %d = %d", num1, num2);
    }
    else if (num1 > num2) {
        printf("Result: %d > %d", num1, num2);
    }
    else {
        printf("Result: %d < %d", num1, num2);
    }
    return 0;

}*/

// Ex: Nested if...else
/*int main() {
    int num1, num2;
    printf("Enter two integer: ");
    scanf("%d %d", &num1, &num2);

    if(num1 >= num2) {
        if(num1 == num2) {
            printf("Result: %d = %d", num1, num2);
        }
        else {
            printf("Result: %d > %d", num1, num2);
        }
    }
    else {
        printf("Result: %d < %d", num1, num2);
    }
    return 0;
}*/
