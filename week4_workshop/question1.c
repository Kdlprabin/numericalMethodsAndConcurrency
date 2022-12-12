#include <stdio.h>
#include <stdlib.h>
int mainOne(){
	
	//Allocating memory for int variable
	int *p1 = malloc(sizeof(int));
	if(p1 == NULL){
		printf("Error...\n");
		return 1;
	}
	
	//Allocating memory for char variable
	char *p2 = malloc(sizeof(char));
	if(p2 == NULL){
		printf("Error...\n");
		return 1;
	}
	
	//Allocating memory for float variable
	float *p3 = malloc(sizeof(float));
	if(p3 == NULL){
		printf("Error...\n");
		return 1;
	}
	
	printf("Enter the int value: ");
	scanf("%d",p1);
	printf("Enter the char value: ");
	scanf("%s",p2);
	printf("Enter the float value: ");
	scanf("%f",p3);
	
}
