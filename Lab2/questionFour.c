#include <math.h>
#include <stdio.h>

int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d", &num);
	armstrongNumber(num);
	perfectNumber(num);
	return 0;
}

void armstrongNumber(int num){
	int sum, count, number, checkNumber;
	sum =0;
	count = 0;
	number = num;
	checkNumber = num;
	while(num>0){
		count ++;
		num = (int)(num / 10);
	}
	while(number>0){
		int rem = number % 10;
		sum = sum + pow(rem,count);
		number = (int)(number/10);
	};
	if (sum == checkNumber){
		printf("The input number is armstrong.\n");
	}else{
		printf("The input number is not armstrong.\n");
	};
}

void perfectNumber(int num){
	int count, sum;
	sum =0;
	for(count = 1; count <= (int)(num/2); count++){
		if(num%count == 0){
			sum = sum + count;
		}
	}
	if(sum == num){
		printf("The input number is a perfect number.\n");
	}else{
		printf("The input number is not a perfect number.\n");
	}
}
