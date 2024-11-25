#include <stdio.h>
/*Every variable in C programming has two properties: type and storage class.

Type refers to the data type of a variable. And, storage class determines the scope, visibility and lifetime of a variable.

There are 4 types of storage class: automatic
                                    external
                                    static
                                    register
*/

// Ex: Local Variable or automatic
/*int main() {
    int n1; // n1 is a local variable to main()
}

void func() {
   int n2;  // n2 is a local variable to func()
}*/
// Ex: Global Variable
/*void display();

int n = 5; // Global Variable

int main() {
    ++n;
    display();
    return 0;
}

void display() {
    ++n;
    printf("n = %d", n);
}*/

// Ex: Static Variable (The value of a static variable persists until the end of the program.)
void display();

int main() {
    display(); // 6
    display(); // 11
    display();
}

void display() {
    static int c = 1;
    c += 5;
    printf("%d\n", c);
}