#include <stdio.h>
#include <stdlib.h>
// Ex: Access members using Pointer
/*struct Person{
    int age;
    float weight;
};
int main() {
    struct Person *personPtr, person1;
    personPtr = &person1;

    printf("Enter age: ");
    scanf("%d", &personPtr ->age); // personPtr ->age equivalent to (*personPtr).age
    printf("Enter weight: ");
    scanf("%.2f", &personPtr ->weight); // personPtr->weight is equivalent to (*personPtr).weight

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr ->age);
    printf("Weight: %.2f", personPtr ->weight);

    return 0;
}*/

// Ex: Dynamic memory allocation of structs
struct Person {
    char name[30];
    int age;
    float wieght;
};
int main() {
    struct Person *ptr;
    int i, n;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    ptr = (struct Person*) malloc(n * sizeof(struct Person));

    for (i = 0; i < n; ++i) {
        printf("Enter first name and age respectively: ");
        scanf("%s %d", (ptr + i)->name, &(ptr + i)->age);
    }
    printf("Displaying Information:\n");
    
    for (i = 0; i < n; ++i) {
        printf("Name: %s\t Age: %d\n", (ptr + i)->name, (ptr + i)->age);
    }

    return 0;
}






