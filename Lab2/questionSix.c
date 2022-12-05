#include <stdio.h>

//find the coordinates of the given two equations
void equations(double a, double b, double c, double d, double e, double f){
	double x = (b*f - e*c)/(a*e - d*b);
	double y = (c*d - a*f)/(a*e - d*b);
	printf("The coordinates are %f and %f.",x,y);
}

int main(){
	equations(1,2,1,2,3,5);
	return 0;
}
