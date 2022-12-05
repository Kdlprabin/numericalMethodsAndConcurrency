#include <stdio.h>

void max(int* one, int* two){
	if(*one < *two){
		printf("%d is the the maximum",*two);
	}
	else if(*two < *one){
		printf("%d is the the maximum",*one);
	}else{
		printf("Both are equal.");
	}
}

int mainOne(){
	int one, two;
	printf("Please Enter first Number: ");
	scanf("%d",&one);
	printf("Please Enter second Number: ");
	scanf("%d",&two);
	max(&one,&two);
	return 0;
}
