#include <stdio.h>

void mainOne(){
	int arr[]={12,12,15};
	int *ptr = arr;
	int i;
	int sum = 0;
	int size = sizeof(arr)/sizeof(int);
	for(i =0; i < size; i++){
		sum = sum + *(ptr+i);
	};
	printf("%d",sum);
}
