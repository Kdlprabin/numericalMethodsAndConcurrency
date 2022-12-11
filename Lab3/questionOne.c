#include <stdio.h>

void largeElementInArray(int arr[], int size){
	int i;
	int element = 0;
	for(i = 0; i < size; i++){
		if(element < arr[i]){
			element = arr[i];
		}
	}
	printf("Largest element in the array : %d",element);
}

void mainOne(){
	int arr[10] = {1,2,3,4,5,6,10,11,4,5};
	int size = sizeof(arr)/4;
	largeElementInArray(arr,size);
}
