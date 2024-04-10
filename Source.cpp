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

    return 0;
}
