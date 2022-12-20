#include <stdio.h>

typedef struct{
	double x;
	double y;
}complex_n;


complex_n sum_struct(complex_n a,complex_n b){
	complex_n c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

void mainTwo(){
	complex_n a,b,c;
	
	printf("Enter ther real and imaginary parts of the first complex number: ");
	scanf("%lf %lf", &a.x, &a.y);
	
	printf("Enter the real and imaginary parts of the second complex number: ");
	scanf("%lf %lf",&b.x,&b.y);
	
	c = sum_struct(a,b);
	
	printf("The third complex number is: %.2lf + %.2lfi\n",c.x,c.y);
}
