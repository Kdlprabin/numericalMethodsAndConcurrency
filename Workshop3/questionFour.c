void mainFour(){
	int largest;
	int smallest;
	int array[3];
	int i;
	for(i = 0; i < 3 ; i++){
		printf("Enter the number : ");
		scanf("%d",&array[i]);
	}
	int size = 3;
	largeSmall(array,size,&largest,&smallest);
	printf(" %d is the largest.\n %d is the small",largest,smallest);
}

void largeSmall(int arr[],int size, int* l, int* s){
	int i;
	int j;
	int large = 0;
	int small;
	for(i = 0; i < size ; i++){
		if(large < arr[i]){
			large = arr[i];
		}
	}
	small = large;
	for(j = 0; j < size ; j++){
		if(small > arr[j]){
			small = arr[j];
		}
	}
	*l = large;
	*s = small;
}
