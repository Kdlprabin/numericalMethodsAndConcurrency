#include <stdio.h>

struct point{
	float x;
	float y;
};

void mainOne(){
	struct point p1, p2;
	p1 = getPoint();
	displayPoint(p1);
	
	p2 = getPoint();
	displayPoint(p2);
	
	mid = calculateMid(p1,p2);
	printf("\nmidpoint is :");
	displayPoint(mid);
}
void displayPoint(struct point p){
	printf("(%.2f, %.2f)\n",)
}

struct point calculateMid(struct point p1, struct point p2){
	struct point m;
	m.x = (p1.x+p2.y)
}
getPoint()
