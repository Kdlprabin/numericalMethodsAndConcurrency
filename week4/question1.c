#include <stdio.h>

void mainOne(){
	printf("Enter the size of the array\n");
	int n;
	//loop to input elements in array
	scanf("%d",&n);
	int arr[n];
	int* ptr =arr;
	int i;
	for(i =0; i<n;i++){
		printf("Enter the element: \n");
		scanf("%d",&arr[i]);
	}
	printf("The elements in the array are: \n");
	for(i=0;i<n;i++){
		printf("%d\n",*(ptr + i));
	}
}

