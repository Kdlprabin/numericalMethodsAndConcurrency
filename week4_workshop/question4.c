void mainFour(){
	int range,addition;
	int i;
	int *ptr;
	printf("Enter the number of integers you want to add : ");
	scanf("%d",&range);
	ptr = (int*)malloc(range*sizeof(int));
	for(i = 0; i < range; i++){
		printf("Enter the numbers : \n");
		scanf("%d",ptr+i);
	}
	sum(ptr,range,&addition);
	printf("%d",addition);
}

void sum(int ptr, int range, int *addition){
	int i;
	for(i =0; i<range;i++){
		*addition = *addition + *(ptr+i);
	}
}
