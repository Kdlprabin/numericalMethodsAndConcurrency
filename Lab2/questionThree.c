#include <stdio.h>

int main(){
	int x1,y1,x2,y2;
	printf("Enter the value of x1: ");
	scanf("%d",&x1);
	printf("Enter the value of y1: ");
	scanf("%d",&y1);
	printf("Enter the value of x2: ");
	scanf("%d",&x2);
	printf("Enter the value of y2: ");
	scanf("%d",&y2);
	midpoint(x1,y1,x2,y2);
	return 0;
}

void midpoint(int x1, int y1, int x2, int y2){
	float x = (x1 + x2)/2;
	float y = (y1 + y2)/2;
	printf("The coordinates of midpoint are: (%f,%f)",x,y);
}
