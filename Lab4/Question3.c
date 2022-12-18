#include <stdio.h>

void mainThree(){
	int *a = (int*)malloc(sizeof(int));
	char *b = (char*)malloc(sizeof(char));
	float *c = (float*)malloc(sizeof(float));
	
	if(a == NULL){
		printf("Problem allocating memory for int.");
	}
	if(b == NULL){
		printf("Problem allocating memory for char.");
	}
	if(c == NULL){
		printf("Problem allocating memory for float.");
	}
	
	*a = 1;
	*b = 'A';
	*c = 1.0;
	
	printf("The three stored values are %d %c %f",*a,*b,*c);
	
	free(a);
	free(b);
	free(c);
}
