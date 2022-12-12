void mainThree(){
	printf("Enter the size of the array\n");
	int n, number;
	//loop to input elements in array
	scanf("%d",&n);
	int arr[n];
	int* ptr =arr;
	int i;
	for(i =0; i<n;i++){
		printf("Enter the element: \n");
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to search : ");
	scanf("%d",&number);
	for(i = 0; i < n; i++){
		if(number == *(ptr + i)){
			printf("The number is in the index %d",i);
			break;
		}
	}
}
