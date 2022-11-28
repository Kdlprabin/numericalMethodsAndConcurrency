#include <stdio.h>
void cubeOfNumber(int n){
	printf("The cube of the number is : %d",n*n*n);
}
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	cubeOfNumber(num);
	return 0;
}
