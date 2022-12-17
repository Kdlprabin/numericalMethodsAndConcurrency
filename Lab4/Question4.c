#include <stdio.h>
#include <stdlib.h>

void mainFour(){
    // Prompt the user for the size of the array
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array
    int *array = (int*) malloc(size * sizeof(int));
    if (array == NULL){
        printf("Error allocating memory for array\n");
    }

    // Prompt the user for the values of the array
    printf("Enter the values for the array:\n");
    for (i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    // Find the maximum value in the array
    int max = array[0];
    for (i = 1; i < size; i++){
        if (array[i] > max){
            max = array[i];
        }
    }

    printf("Maximum value in the array: %d\n", max);

    // Free the allocated memory
    free(array);
}

