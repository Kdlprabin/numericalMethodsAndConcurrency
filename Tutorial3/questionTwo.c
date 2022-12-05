void sort(int arr[], int size){
	int newArr[size];
	int largest;
	int i,j;
	printf("%d\n",arr);
	for(j =0 ; j < size; j++){
		for(i = 0 ; i < size; i++){
			if(arr[i] >= largest){
				largest = arr[i];
			}
		}
		newArr[j] = largest;
	}
	printf("%d",newArr);
	
}

void mainTwo(){
	int arr[] = {1,5,3,4,6,7};
	int size = sizeof(arr)/4;
	sort(arr,size);
}
