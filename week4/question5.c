#include <stdio.h>
#include <stdlib.h>

int mainFive() {
  int n,i;
  double *numbers;

  // Get the number of elements from the user
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Allocate memory for the numbers using malloc()
  numbers = (double*) malloc(n * sizeof(double));

  if (numbers == NULL) {
    // malloc() failed
    printf("Error...\n");
    return 1;
  }

  // Get the numbers from the user
  printf("Enter the numbers: \n");
  for ( i = 0; i < n; i++) {
    scanf("%lf", &numbers[i]);
  }

  // Print the numbers using a pointer variable
  printf("The numbers are: ");
  double *ptr = numbers;
  for ( i = 0; i < n; i++) {
    printf("%lf ", *ptr);
    ptr++;
  }
  printf("\n");

  // Free the memory allocated for the numbers
  free(numbers);

  return 0;
}

