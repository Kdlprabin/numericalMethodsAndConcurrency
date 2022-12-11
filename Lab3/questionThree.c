#include <stdio.h>

void mainThree(){
	int one[] = {1,2,2,2,2,4,5,6};
	int size1 = sizeof(one)/4;
	unique(one,size1);
}

void unique(int one[],int size1){
	int i,j;
	for(i = 0; i < size1; i++){
		int count = 0;
		for(j = 0; j < size1; j++){
			if(i!=j){
				if(one[i] == one[j]){
					count++;
				}
			}
		}
		if(count == 0){
			printf("%d",one[i]);
		}
	}
}
