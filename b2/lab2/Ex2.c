#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Assume that a railway train has N railroad cars attached together such as $\text{car}_1, \text{car}_2, \text{car}_3, \dots , \text{car}_N$. A train can be considered as a list and each car corresponds to a node in this list.

- Each car carries a number of passengers (int type) and has a name (char type). Both variables are user-defined values.
- If there are any cars that don’t have any passengers, they should be removed from the train.
- It is possible to add new cars to the train.
- A function is available to display all cars’ information or the length of the train.

Implement a program in C using Linked List to manage the train and test all functions.*/
typedef struct Cars {
    int passengers;
    char* name;
} car_S;

typedef struct Railroad {
    car_S car;
    struct Railroad* next, * prev;
} railRoad;
// Function to add Cars
void addCar(railRoad** head, int passengers, char* name) {

    railRoad* newCar = (railRoad*) malloc(sizeof(railRoad));
    newCar->car.name = (char*) malloc(strlen(name) + 1);
    strcpy(newCar->car.name, name);

    newCar->car.passengers = passengers;

    newCar->next = (*head);
    newCar->prev = NULL;

    if ((*head) != NULL) {
        (*head)->prev = newCar;
    }

    (*head) = newCar;
}
// Function to remove Cars
void removeCar(railRoad** head) {
    railRoad* currentCar = *head;
    if (*head == NULL) {
        return;
    }
    while (currentCar != NULL) {
        if (currentCar->car.passengers == 0) {
            if (currentCar->next != NULL) {
                currentCar->next->prev = currentCar->prev;
            }
            if (currentCar->prev != NULL) {
                currentCar->prev->next = currentCar->next;
            }
            free(currentCar);
            currentCar = currentCar->next;
        }  
        else {
            currentCar = currentCar->next;
        } 
    }   
}
// Function to display Cars
void displayCar(railRoad* head) {
    railRoad* currentCar = head;
    int cnt = 1;
    if (head == NULL) {
        printf("Railroad is empty!!!");
        return;
    }
    else { 
        printf("\n\nRailroad cars information:\n");
        while (currentCar != NULL) { 
            printf("Car %d:\n", cnt);
            printf("Name: %s And have %d passengers\n", currentCar->car.name, currentCar->car.passengers);
            currentCar = currentCar->next;
            cnt++;
        } 
    }
}

int main() {
    railRoad* head = NULL;
    int amountOfCars, passengers, amountOfnextCars;
    char name[100];
// Add Cars
    printf("Enter the number of cars that you want: ");
    scanf("%d", &amountOfCars);
    getchar();
    printf("Enter the number of passenger(s) and name of each car: \n");
    for (int i = 0; i < amountOfCars; i++) {
        printf("Car %d:\n", i + 1);
        printf("_Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; // remove term newline
        printf("Number of passenger(s) on car: ");
        scanf("%d", &passengers);

        addCar(&head, passengers, name);
        getchar();
    }
    printf("___________________________");
    displayCar(head);
    printf("___________________________");

// Add new Cars
    printf("\n\nHow many cars do you want to add more: ");
    scanf("%d", &amountOfnextCars);
    printf("Enter the number of passenger(s) and name of each car: \n");
    for (int i = 0; i < amountOfCars; i++) {
        if (i == 0) { 
            for (int j = 0; j < amountOfnextCars; j++) {
                printf("Car %d:\n", amountOfCars + j + 1 + (i * amountOfnextCars));
                printf("_Name: ");
                fflush(stdin); // clear input buffer
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0';
                printf("Number of passenger(s) on car: ");
                scanf("%d", &passengers);

                addCar(&head, passengers, name);
                getchar();
            }
        }
    }
    printf("___________________________");
    displayCar(head);
// Remove
    printf("When we remove Cars with empty passengers:\n ");
    removeCar(&head);
    printf("___________________________");
    displayCar(head);
    printf("___________________________");
    
    return 0;
}