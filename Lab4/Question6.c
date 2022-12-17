#include <stdio.h>
#include <stdlib.h>

void mainSix(){
    // Allocate memory for the array
    int i;
    int size = 3;
    int *array = (int*) malloc(size * sizeof(int));
    if (array == NULL){
        printf("Error allocating memory for array\n");
    }

    // Prompt the user for the values of the array
    printf("Enter the values for the array:\n");
    for (i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    // Print the elements of the array
    printf("Array:\n");
    for (i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    // Add more elements to the array
    size += 2;
    array = (int*) realloc(array, size * sizeof(int));
    if (array == NULL){
        printf("Error allocating memory for array\n");
    }

    // Prompt the user for the additional elements
    printf("Enter two additional elements for the array:\n");
    scanf("%d%d", &array[size - 2], &array[size - 1]);

    // Print all the elements of the array
    printf("Array:\n");
    for (i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(array);
}

