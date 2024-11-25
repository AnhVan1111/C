#include <stdio.h>
// Ex: Program to Store Information of a Student Using Structure
/*struct Student {
    char name[50];
    float marks;
    int roll;
} s;
int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter mark: ");
    scanf("%f", &s.marks);

    printf("Displaying Information:\n");
    printf("Name: %s", s.name);
    printf("Roll: %d\n",s.roll);
    printf("Mark: %.1f", s.marks);

    return 0;
}*/

// Ex: Program to Add Two Distances (in inch-feet system) using Structures 
   /*12 inches is 1 foot.*/
/*struct Distance {
    int feet;
    float inch;
}d1, d2, result;
int main() {
    printf("Enter 1st distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    printf("\nEnter 2nd distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    while (result.inch >= 12) {
        result.inch = result.inch - 12;
        ++result.feet;
    }

    printf("\nSum of distance = %d\'-%.1f\"", result.feet, result.inch);

    return 0;
}*/

// Ex: Program to Add Two Complex Numbers by Passing Structure to a Function
typedef struct Complex {
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);

int main() {
    complex n1, n2, result;

    printf("For 1st complex number:\n");
    printf("Enter real part: ");
    scanf("%f", &n1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &n1.imag);

    printf("\nFor 2nd complex number:\n");
    printf("Enter real part: ");
    scanf("%f", &n2.real);
    printf("Enter imaginary part: ");
    scanf("%f", &n2.imag);

    result = add(n1, n2);

    printf("sum = %.1f + %.1fi", result.real, result.imag);

    return 0;
}

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}

