void sumOfElements(int arr[], int size){
	int sum = 0;
	int i;
	for(i = 0; i < size ; i ++){
		sum = sum + arr[i];
	}
	printf("The sum of the elements in array are : %d",sum);
}

void mainThree(){
	int i;
	int arr[10];
	for(i = 0; i < 10; i++){
		printf("Enter the value to store in the array: ");
		scanf("%d",&arr[i]);
	}
	sumOfElements(arr,10);
}
