//function to find the triangular numbers for the provided range
void triangularNum(int n){
	int sum,i;
	for(i = 1; i <=n; i++){
		sum = sum + i;
		printf("%d",sum);
		printf(" ");
	}
}

int mainThree(){
	int n;
	printf("Please enter the range: ");
	scanf("%d",&n);
	triangularNum(n);
	return 0;
}
