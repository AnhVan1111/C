#include <stdio.h>
// Ex 4: Write a C program to calculate an area and circumference of a circle with a preassigned radius and with a radius input from the keyboard.
int main(){

    double n; 
    scanf("%lf", &n);

    double C = 2*3.14*n;
    double A = 3.14*n*n; 

    printf("The circumference of the circle is: %.2lf\n", C ); // .2lf ở đây dùng để hiện thị 2 số sau dấu chấm khi in kết quả ra màn hình 
    printf("The area of the circle is: %.2lf", A );

    return 0;
}