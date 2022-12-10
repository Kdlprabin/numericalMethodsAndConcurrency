void mainThree(){
	int one[] = {1,2,4,5,6};
	int two[] = {3,4,5,6};
	int size1 = sizeof(one)/4;
	int size2 = sizeof(two)/4;
	unique(one,size1,two,size2);
}

void unique(int one[],int size1, int two[], int size2){
	int i,j;
	int length;
	
	//check the length of the variables required to run
	if(size1 < size2){
		length = size2;
	}else{
		length = size1;
	}
	
	for(i = 0; i < length; i++){
		
	}
}
