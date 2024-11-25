#include <stdio.h>
#include <math.h>
/*Ex5: : Write a C program to solve a system of linear equations with two variables
ax+by=c and dx+ey=f with the parameters a, b, c, d, e, and f input from the keyboard*/

int main() {

    double a, b, c, d, e, f;
    double x, y;
    
    printf("Enter the coefficients of the equations in the form ax + by = c and dx + ey = f:\n");
    
    printf("a:");
    scanf("%df", &a);

    printf("b:");
    scanf("%df", &b);

    printf("c:");
    scanf("%df", &c);

    printf("d:");
    scanf("%df", &d);

    printf("e:");
    scanf("%df", &e);

    printf("f:");
    scanf("%df", &f);

    double detA = a * e - b * d;
    double detX = b * f - c * e;
    double detY = a * f - c * d;

    if (detA == 0) {
        if(detX == 0 && detY == 0) {
            printf("The system of equations has infinirly many solution.\n");
        } else {
            printf("The system of equations has no solutions.\n");

        }
    } else {
        x = detX / detA;
        y = detY / detA;

        printf("The solution of the system of equation is x = %.2df and y = %.2df.\n", x, y);
    }

    return 0;
}