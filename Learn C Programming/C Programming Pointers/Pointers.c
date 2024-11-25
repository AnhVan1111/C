#include <stdio.h>
/*int main() {
    int var = 5;
    printf("Var = %d\n", var);
    printf("Address of var  = %p", &var);
    return 0;
}*/

int main() {
    int* pc, c;

    c = 22;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);

    pc = &c;
    printf("Address of c: %p\n", &pc);
    printf("Value of c: %d\n\n", *pc);

    c = 11;
    printf("Address of c: %p\n", &pc);
    printf("Value of c: %d\n\n", *pc);

    *pc = 2;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);

    return 0;
}