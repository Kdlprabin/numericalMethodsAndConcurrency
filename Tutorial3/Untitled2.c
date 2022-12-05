#include <stdio.h>

void main(){
	int i;
	int arr[5] = {};
	for(i = 0; i<5 ; i++){
		printf("Enter the number to add in the array: ");
		scanf("%d",&arr[i]);
	}
	for(i = 0; i<5 ; i++){
		printf("%d\n",arr[i]);
	}
}
