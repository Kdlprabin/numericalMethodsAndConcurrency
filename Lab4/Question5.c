#include <stdio.h>
#include <stdlib.h>

void mainFive(){
	printf("Enter the size of array : ");
	int size;
	scanf("%d",&size);
	
	int *arr1 = (int*)malloc(size * sizeof(int));
	int *arr2 = (int*)malloc(size * sizeof(int));
	int *arr3 = (int*)malloc(size * sizeof(int));

	int i;
	for(i = 0; i < size; i++){
		printf("Please enter a element of first array: ");
		scanf("%d",(arr1+i));
	}
	for(i = 0; i < size; i++){
		printf("Please enter a element of second array: ");
		scanf("%d",(arr2+i));
	}
	for(i = 0; i < size; i++){
		arr3[i] = *(arr1 + i) + *(arr2 + i);
	}
	printf("The third array elements are : {");
	for(i = 0; i < size; i ++){
		printf(" %d ",arr3[i]);
	}
	printf("}");
}

