#include <stdio.h>
#include <stdlib.h>

void mainFour() {
  int n,i;
  int *array;
  // Get the size of the array from the user
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  // Allocate memory for the array using malloc()
  array = (int*) malloc(n * sizeof(int));

  if (array == NULL) {
    // malloc() failed
    printf("Error...\n");
    return 1;
  }

  // Get the elements of the array from the user
  printf("Enter the elements of the array: \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  // Reverse the array
  for (i = 0; i < n/2; i++) {
    // Swap the elements at index i and n-i-1
    int temp = array[i];
    array[i] = array[n-i-1];
    array[n-i-1] = temp;
  }

  // Print the reversed array
  printf("The reversed array is: ");
  for (i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  // Free the memory allocated for the array
  free(array);
}

