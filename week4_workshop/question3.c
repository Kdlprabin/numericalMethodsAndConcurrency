#include <stdio.h>
#include <stdlib.h>

void mainThree(){
	int *arr1,*arr2,size,i;
	int *sumArr;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	arr1 = (int*)malloc(size*sizeof(int));
	arr2 = (int*)malloc(size*sizeof(int));
	sumArr = (int*)malloc(size*sizeof(int));
	for(i =0; i < size; i++){
		printf("Enter the elements of first array : ");
		scanf("%d",arr1+i);
	}
	for(i =0; i < size; i++){
		printf("Enter the elements of second array : ");
		scanf("%d",arr2+i);
	}
	for(i = 0; i < size; i++){
		sumArr[i] = *(arr1 + i) + *(arr2 + i);
	}
	for(i=0;i<size;i++){
		printf("The sumArr contains the following elements : ");
		printf("%d\n",*(sumArr+i));
	}
	free(arr1);
	free(arr2);
	free(sumArr);
}
