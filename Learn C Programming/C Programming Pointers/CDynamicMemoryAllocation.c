#include <stdio.h>
#include <stdlib.h>
// Ex: malloc() và free()
/*int main() {
    int i, n, *pp, sum = 0;

    printf("Enter number of element:");
    scanf("%d", &n);

    pp = (int*) malloc(n * sizeof(int));

    if (pp == NULL) {
        printf("Error!!!!");
        exit(0);
    }
    printf("Enter element:\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", pp + i);
        sum += *(pp + i);
    }
    printf("Sum = %d", sum);

    free(pp);

    return 0;   
}*/

// Ex: calloc() và free()
/*int main() {
    int i, n, *pp, sum = 0;

    printf("Enter number of element:");
    scanf("%d", &n);

    pp = (int*) calloc(n * sizeof(int));

    if (pp == NULL) {
        printf("Error!!!!");
        exit(0);
    }
    printf("Enter element:\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", pp + i);
        sum += *(pp + i);
    }
    printf("Sum = %d", sum);

    free(pp);

    return 0;   
}*/

// Ex: realloc()
int main() {
    int n1, n2, i, *pp;
    printf("Enter size n1: ");
    scanf("%d", &n1);

    pp = (int*) malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory:\n");
    for (i = 0; i < n1; ++i) {
        printf("%p\n", pp + i);
    }

    printf("Enter size n2: ");
    scanf("%d", &n2);

    pp = realloc(pp, n2 * sizeof(int));

    printf("Addresses of newly allpcated memory:\n");
    for (i = 0; i < n2; ++i) {
        printf("%p\n", pp + i);
    }
    free(pp);

    return 0;
}