#include <stdio.h>
#include <stdlib.h>

void mainTwo(){
	int i,size,max;
	int *arr;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	//taking input for the array
	for(i = 0; i < size; i++){
		arr = (int*)malloc(size*sizeof(int));
	}
	for(i =0; i < size; i++){
		printf("Enter the element: ");
		scanf("%d",arr+i);
	}
	max = *(arr);
	for(i =0; i < size; i++){
		if(*(arr+i) > max){
			max = *(arr+i);
		}
	}
	printf("The max number is %d.",max);
	free(arr);
}
