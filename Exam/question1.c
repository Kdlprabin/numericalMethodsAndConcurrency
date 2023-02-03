#include<stdio.h>
int main(){
	int finalScore;
	printf("Enter the obtained final score:");
	scanf("%d",&finalScore);
	if(finalScore>80 & finalScore<=100){
		printf("You have obtained distinction.");
	}else if(finalScore>60 & finalScore<=80){
		printf("You have obtained first division");
	}else if(finalScore>50 & finalScore<=60){
		printf("You have obtained second division");
	}else if(finalScore>50 & finalScore<=40){
		printf("You have obtained third division");
	}else if(finalScore<40 & finalScore>=0){
		printf("You have failed");
	}else{
		printf("Invalid Input");
	}
	return 0;
}
