#include <stdio.h>

int mainFive(){
	int a,b,c,i;
	printf("Enter the Number: ");
	scanf("%d",&a);
	printf("Enter the Number: ");
	scanf("%d",&b);
	printf("Enter the Number: ");
	scanf("%d",&c);
	printf("a: %d b: %d c: %d\n",a,b,c);
	swapNumbers(&a,&b,&c);
	return 0;
}

void swapNumbers(int* a, int* b, int* c){
	int d = *a;
	*a = *b;
	*b = *c;
	*c = d;
	printf("a: %d b: %d c: %d",*a,*b,*c);
}
