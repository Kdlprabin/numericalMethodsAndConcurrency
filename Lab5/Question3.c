#include <stdio.h>


struct limit{
	int upperLimit;
	int lowerLimit;
};
	
	
void display_bounds(struct limit l){
	int i;
	for(i = l.lowerLimit+1; i<l.upperLimit; i++){
		printf("%d ", i);
	}
}

void mainThree(){ 
	struct limit l;
	printf("Enter the lower limit: ");
	scanf("%d", &l.lowerLimit);
	printf("Enter the upper limit: ");
	scanf("%d", &l.upperLimit);
	printf("The elements between %d and %d are:\n", l.lowerLimit, l.upperLimit);
	display_bounds(l);
}

