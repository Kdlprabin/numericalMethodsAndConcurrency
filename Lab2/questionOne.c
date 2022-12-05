#include <stdio.h>

void getCube(int n){
	printf("The cube of the number is : %d",n*n*n);
}

int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	getCube(n);
	return 0;
}
