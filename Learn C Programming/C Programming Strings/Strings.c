#include <stdio.h>
// Ex: scanf() to read a string
/*int main() {
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s", name);
    return 0;
}*/

// Ex: fgets() and puts()
/*int main() {
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin); // gets(name); //Function to read string from user.
    printf("Name: ");
    puts(name);
    return 0;
}*/

// Ex: Passing string to a Function
/*void displayString(char str[]);

int main() {
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    displayString(str);
    return 0;
}

void displayString(char str[]) {
    printf("String Output: ");
    puts(str);
}*/

// Ex: Strings and Pointers
/*int main() {
    char name[] = "Van Anh";
    printf("%c", *name);
    printf("%c", *(name + 1));
    printf("%c", *(name + 4));

    char * namePtr;
    namePtr = name;
    printf("%c", *namePtr);
    printf("%c", *(namePtr + 1));
    printf("%c", *(namePtr + 4));
}*/

int main() {
    char name[50];
    printf("Enter name: ");
    gets(name);
    printf("Name: ");
    puts(name);
    return 0;
}