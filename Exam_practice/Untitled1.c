#include <stdio.h>

void main(){
	int size,i;
	int *ptr1, *ptr2, *ptr3;
	printf("please enter the size of the array : ");
	scanf("%d",&size);
	int arr1[size];
	int arr2[size];
	int arr3[size];
	ptr1 = &arr1;
	ptr2 = &arr2;
	ptr3 = &arr3;
	for(i =0; i<size; i++){
		printf("enter the element for array %d: ",1);
		scanf("%d",ptr1+i);
	}
	for(i =0; i<size; i++){
		printf("enter the element for array %d: ",2);
		scanf("%d",ptr2+i);
	}
	for(i =0; i<size; i++){
		int sum = *(ptr1+i) + *(ptr2+i);
		*(ptr3+i) = sum;
	}
	printf("The elements of sum array are :\n");
	for(i =0; i<size; i++){
		printf("%d\n",*(ptr3+i));
	}
}
