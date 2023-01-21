#include <stdio.h>
int main(){
	FILE *f = fopen("sum.txt","a");
	int n;
	printf("How many numbers do you want to add?  : ");
	scanf("%d",&n);
	int i;
	int sum=0;
	for(i=0;i<n;i++){
		int input;
		printf("Enter the number: ");
		scanf("%d",&input);
		fprintf(f,"%d ",input);
		sum += input;
	}
	fprintf(f,"\nThe sum is : %d",sum);
	fclose(f);
	return 0;
}
