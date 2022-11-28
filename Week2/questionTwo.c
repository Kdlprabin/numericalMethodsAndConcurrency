#include <stdio.h>

void greatestAmongTwo(int a, int b){
	if(a < b){
		printf("Enter %d is greatest.",b);
	}
	else if(a > b){
		printf("Enter %d is greatest.",a);
	}
	else{
		printf("Both of them are equal.");
	}
}

int mainTwo(){
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	greatestAmongTwo(a,b);
	return 0;
}
