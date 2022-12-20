#include <stdio.h>

typedef struct{
	double x;
	double y;
}complex_t;

void mainOne(){
	complex_t a, b, c;
	
	printf("Enter ther real and imaginary parts of the first complex number: ");
	scanf("%lf %lf", &a.x, &a.y);
	
	printf("Enter the real and imaginary parts of the second complex number: ");
	scanf("%lf %lf",&b.x,&b.y);
	
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	
	printf("The third complex number is: %.2lf + %.2lfi\n",c.x,c.y);
}
