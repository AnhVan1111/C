#include <stdio.h>
#include <math.h>
/* Ex 4:  Enter a year in the format of Gregorian calendar and check if it is a leap year or not. 
Leap years refers to years divisible by both 100 and 400, or the other case, the year is divisible by 4.*/

int main() {
    int year;
    
    printf("Enter a year:");
    scanf("%d", &year);

    if((year % 100 == 0 && year % 400 == 0) || year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } 
    else {
        printf("%d is not leap year.\n", year);
    }

    return 0;

}