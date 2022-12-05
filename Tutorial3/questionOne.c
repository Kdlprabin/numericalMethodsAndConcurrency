void largestElement(int arr[], int size){
	int i;
	int largest = 0;
	for(i = 0 ; i < size; i++){
		if(arr[i] >= largest){
			largest = arr[i];
		}
	}
	printf("The largest integer is : %d",largest);
}

void mainOne(){
	int array[] = {1,4,1,2,1,9};
	int size = sizeof(array)/4;
	largestElement(array,size);
}
