#include <stdio.h>
#include <math.h>
#define MAX 100
/*Suppose that a polynomial function $a_0 + a_1x + a_2x^2 + \dots + a_nx^n$. Using List ADT, we would like to improve the computation of this function. The declaration of each element in the List should be as follows:

- a value stands for a constant of each term ai (i = 0, .., n)
- a degree indicates the degree of each term

Implement and test the program in C using a Static Array-based List to manage
this polynomial function:

- add new terms, verify that the old term exists, if in the case, return the addition between the old and new ones i.e given the polynomial function a0x 0 + a1x1, a new term is added into the function then the final term should be $a^{\text{total}}_0 = a^{\text{new}}_0 + a_0$.
- remove a term from the function
- enter a value for x then calculate the whole function
- display the whole function on the screen*/
typedef struct Term {
    float constant;
    int degree;
}term;

typedef struct Polynomial {
    term Terms[MAX];
    int lengths;
}polynomial;

// Function to add new terms, verify that the old term exists
static void addTerm(polynomial* poly, float constant, int degree) {
    // Add new term if it doesn't exist
    term newTerm;
    newTerm.degree = degree;
    newTerm.constant = constant;
    poly->Terms[poly->lengths++] = newTerm;

    // Update
    for (int i = 0; i < poly->lengths; i++) {
        term terms = poly->Terms[i];
        if (terms.degree == degree) {
            terms.constant += constant;
            return;
        }
    }  
}

// Function to remove a term
static void removeTerm(polynomial *poly, int degree) {
    int i;
    for (i = 0; i < poly->lengths; i++) {
        if (poly->Terms[i].degree == degree) {
            term temp = poly->Terms[i];
            poly->Terms[i] = poly->Terms[poly->lengths - 1];
            poly->Terms[poly->lengths - 1] = temp;

            poly->lengths -= 1;
            return;
        }
    }
}

// Function to calculate
static double calPolynomial(polynomial* poly, int num) {
    double result = 0.0;
    for (int i = 0; i < poly->lengths; i++) {
        term* term_n = &(poly->Terms[i]);
        result += term_n->constant * pow(num, term_n->degree);
    }
    return result;
}

// Function to display
static void dispPolynomial(polynomial* poly) {
    int n = poly->lengths;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // swap term when previous term larger than after term
            if (poly->Terms[j].degree > poly->Terms[j + 1].degree) {
                term temp = poly->Terms[j];
                poly->Terms[j] = poly->Terms[j + 1];
                poly->Terms[j + 1] = temp;
            }
        }
        term term_n = poly->Terms[i];
        if (term_n.constant != 0) {
            if (i != 0 && term_n.constant > 0) {
                printf(" + ");
            }    
            printf("%.1fx^%d", term_n.constant, term_n.degree);   
        }
    }  
}

int main() {
    polynomial poly;
    poly.lengths = 0;

    int termAmounts, x, degree_remove, degree;
    double result, coefficient;
    printf("Enter the number of terms in the Polynomial: ");
    scanf("%d", &termAmounts);

// addTerm
    for (int i = 0; i < termAmounts; i++) {
        printf("Enter the coefficient for term %d: ", i + 1);
        scanf("%lf", &coefficient);

        printf("Enter the degree for term %d: ", i + 1);
        scanf("%d", &degree);

        addTerm(&poly, coefficient, degree);
    }
    // display
    dispPolynomial(&poly);

// Calculate with x in the whole function
    printf("\nEnter the value x: ");
    scanf("%d", &x);
    result = calPolynomial(&poly, x);
    printf("Result for x = %d: %.2lf\n", x, result);

// Remove term
    printf("Enter the degree of the term to remove: ");
    scanf("%d", &degree_remove);
    removeTerm(&poly, degree_remove);
    // display
    dispPolynomial(&poly);

    return 0;
}