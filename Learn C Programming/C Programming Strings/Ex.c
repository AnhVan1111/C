#include <stdio.h>
#include <ctype.h>
#include <string.h>
// Ex: Find the Frequency of a Character
/*int main() {
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if(ch == str[i]) {
            ++count;
        }
    }
    printf("Frequency of %c = %d ", ch, count);
    
    return 0;
}*/

// Ex: Program to count vowels, consonants, etc.
/*int main() {
    char line[150];
    int vowels, consonants, digits, space;

    vowels = consonants = digits = space = 0;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) {
        
        line[i] = tolower(line[i]); // tolower: such as M --> m

        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') {
            ++vowels;
        }
        else if (line[i] >= 'a' && line[i] <= 'z') {
            ++consonants;
        }
        else if (line[i] >= '0' && line[i] <= '9') {
            ++digits;
        }
        else if (line[i] == ' ') {
            ++space;
        } 
    }
    
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("digits = %d\n", digits);
    printf("space = %d", space);

    return 0;
}*/

// Ex: Calculate Length of String without Using strlen() Function
/*int main() {
    char s[] = "Programming is fun";
    //int i;

    //for (i = 0; s[i] != '\0'; ++i);

    //printf("Length of the string: %d", i);

    //printf("Lenght of the string s = %zu \n", strlen(s));
    
    return 0;
}*/

// Ex: Concatenate Two Strings Without Using strcat()
/*int main() {
    char s1[100] = "Programming ", s2[] = "is awesome";
    int length = 0, j;

    while (s1[length] != '\0') {
        ++length;
    }
    for (j = 0; s2[j] != '\0'; ++j, ++length) {
        s1[length] = s2[j];
    }
    s1[length] ='\0';
    printf("After concatenate: ");
    puts(s1);

    // when use strcat()
    //strcat(s1, s2);
    //puts(s1); // the resultant string is stored in s1

    return 0;
}*/

// Ex: Program to Copy String Without using strcpy()
/*int main() {
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);

    // if use strcpy()
    //strcpy(s2, s1);
    //printf("String s2: ");
    //puts(s2);

    return 0; 
}*/

// Ex: Program to Remove all Characters in a String Except Alphabets
int main() {
    char line[100];
    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin);
    for (int i = 0, j; line[i] != '\0'; ++i) {
        while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
            for (j = i; line[j] != '\0'; ++j) {
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }        
    }
    printf("Output String: ");
    puts(line);
    return 0;
}













