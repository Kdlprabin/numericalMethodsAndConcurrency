#include <stdio.h>

int mainThree(){
	int arr[] = {1,2,3,4,5,6,7};
	int size = sizeof(arr);
	int num = 4;
	findElement(arr,size,num);
	return 0;
}

void findElement(int arr[], int size, int num){
	int i;
	int index;
	int isFound = 0;
	for(i = 0 ; i < size; i++){
		if(arr[i] == num){
			index = i;
			isFound = 1;
			break;
		}
	}
	if(isFound == 1){
		printf("The element is in the index : %d",index);
	}else{
		printf("Element Not found");
	}
}
