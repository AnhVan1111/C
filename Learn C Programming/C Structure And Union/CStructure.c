#include <stdio.h>
#include <string.h>
// Ex: C Structure
/*struct Person {
    char name[50];
    int citNo;
    float salary;
} person1;

int main() {
    strcpy(person1.name, "Van Anh");
    person1.citNo = 2003;
    person1.salary = 2000;

    printf("Name: %s\n", person1.name);
    printf("Citizenship No: %d\n", person1. citNo);
    printf("Salary: %.2f", person1.salary);

    return 0;
}*/

// Ex: Keyword typedef
/*typedef struct Person {
    char name[50];
    int citNo;
    float salary;
} person;

int main() {
    person p1;

    strcpy(p1.name, "Van Anh");
    p1.citNo = 2003;
    p1.salary = 2000;

    printf("Name: %s\n", p1.name);
    printf("Citizenship No: %d\n", p1.citNo);
    printf("Salary: %.2f", p1.salary);

    return 0;
}*/

// Ex: Nested Structures
struct complex {
    int imag;
    float real;
};
struct number {
    struct complex comp;
    int integers;
} num1;

int main() {
    num1.comp.imag = 10;
    num1.comp.real = 15.5;
    num1.integers = 6;

    printf("Imaginary Part: %d\n", num1.comp.imag);
    printf("Real Part: %.2f\n", num1.comp.real);
    printf("Integer: %d", num1.integers);

    return 0;
}


