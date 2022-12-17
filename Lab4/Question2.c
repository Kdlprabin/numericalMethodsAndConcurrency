#include <stdio.h>

void mainTwo(){
    // Declare an array of integers and a pointer to an integer
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int i;
    // Prompt the user for the element to search for
    int element;
    printf("Enter the element to search for: ");
    scanf("%d", &element);
    // Search for the element in the array
    int found = 0;
    for (i = 0; i < 5; i++){
        if (*(ptr+i) == element)
        {
            found = 1;
            break;
        }
    }
    // Print the result of the search
    if (found){
        printf("Element found in the array\n");
    }else{
        printf("Element not found in the array\n");
    }
}

