#include <stdio.h>

void mainSix(){
	int arr[] = {1,2,4,8,4,2,4,9,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	int newarr[size]; int count = 0, i,j;
	
	for(i=0; i<size; i++){
		for(j=0; j<count; j++){
			if(arr[i]==newarr[j]){
				break;
			}
		}
		if(j==count){
			newarr[count] = arr[i];
			count++;
		}
	}
	
	printf("The distinct elements are: ");
	for(i=0;i<count; i++){
		printf("%d ",newarr[i]);
	}
}
