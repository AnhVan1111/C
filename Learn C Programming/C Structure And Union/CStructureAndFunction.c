#include <stdio.h>

// Ex: Passing structs to functions
/*struct Student {
    int age;
    char name[50];
};

void display(struct Student s);

int main() {
    struct Student s1;

    printf("Enter name: ");
    scanf("%[^\n]%*c", s1.name); //fgets(s1, sizeof(s1), stdin);
    printf("Enter age: ");
    scanf("%d", &s1.age);

    display(s1);

    return 0;
}

void display(struct Student s) {
    printf("\nDisplaying information:\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d", s.age);
}*/

// Ex: Return struct from a function
struct Student {
    int age;
    char name[50];
};

struct Student getInformation();

int main() {
    struct Student s;

    s = getInformation();

    printf("\nDisplaying Information:\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d", s.age);

    return 0;
}

struct Student getInformation() {
    struct Student s1;

    printf("Enter name: ");
    scanf("%[^\n]%*c", s1.name);
    printf("Enter age: ");
    scanf("%d", &s1.age);

    return s1;
}

// Ex: Passing struct by reference
/*typedef struct Complex {
    float real;
    float imag;
} complex;

void addNumbers(complex c1, complex c2, complex *result);

int main() {
    complex c1, c2, result;

    printf("For 1st number:\n");
    printf("Enter Real Part: ");
    scanf("%f", &c1.real);
    printf("Enter Imaginary Part: ");
    scanf("%f", &c2.imag);

    printf("For 2nd number:\n");
    printf("Enter Real Part: ");
    scanf("%f", &c2.real);
    printf("Enter Imaginary Part: ");
    scanf("%f", &c2.imag);

    addNumbers(c1, c2, &result);
    printf("\nResult.real = %.1f", result.real);
    printf("Result.imaginary = %.1f", result.imag);

    return 0;
}

void addNumbers(complex c1, complex c2, complex *result) {
    (*result).real = c1.real + c2.real; // result->real = c1.real + c2.real
    (*result).imag = c1.imag + c2.imag; // result->imag = c1.imag + c2.imag
}*/


