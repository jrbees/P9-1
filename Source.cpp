#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

int main() {
    int array[ARRAY_SIZE];
    int i;

    // Seed the random number generator
    srand(time(NULL));

    // Initialize array with 4-digit random integers
    printf("The random integers: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        array[i] = rand() % 9000 + 1000; // Generate random number between 1000 and 9999
        printf("%d ", array[i]);
    }
    printf("\n");

    // Print every element at an even index
    printf("Even indices: ");
    for (i = 0; i < ARRAY_SIZE; i += 2) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Print every even element
    printf("Even values: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    // Print all elements in reverse order
    printf("Reversed order: ");
    for (i = ARRAY_SIZE - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Print only the first and last element
    printf("First and last: %d %d\n", array[0], array[ARRAY_SIZE - 1]);

    return 0;
}

//finalized same as last commit, this is the edit i made to commit as final
