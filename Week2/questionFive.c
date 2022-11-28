#include <stdio.h>

void solveEquation(double a, double b, double c, double d, double e, double f){
	double x = (b*f - e*c)/(a*e - d*b);
	double y = (c*d - a*f)/(a*e - d*b);
	printf("The coordinates are %f and %f.",x,y);
}

int mainFive(){
	solveEquation(1,2,1,2,3,5);
	return 0;
}
