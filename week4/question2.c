void mainTwo(){
	printf("Enter the size of the array\n");
	int n;
	//loop to input elements in array
	scanf("%d",&n);
	int arr[n];
	int* ptr =arr;
	int i;
	int sum =0;
	for(i =0; i<n;i++){
		printf("Enter the element: \n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum = sum + *(ptr + i);
	}
	printf("The sum of the elements are: %d",sum);
}
