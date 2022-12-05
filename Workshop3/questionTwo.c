int mainTwo(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr);
	checkNumber(arr,size);
	return 0;
}

void checkNumber(int arr[], int size){
	int i;
	int count;
	int sum = 0;
	for(i = 0; i < size; i++){
		if((arr[i]%7 == 0) && (arr[i]%2 != 0) && (arr[i]%3 != 0)){
			count++;
			sum = sum + arr[i];
		}
	}
	printf("count : %d\n",count);
	printf("sum: %d",sum);
}


