#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
struct structure{
	int id;
	int start;
	int end;
};

void *printNums(void *p){
	struct structure *value = (struct structure*)p;
	int i;
	for(i = value->start;i<=value->end;i++){
		if(i%2 != 0){
			printf("Thread %d: %d\n",value->id,i);
		}
	}
}

void getValues(int n,int *arr){
	int i;
	int value = 500;
	int div= value /n;
	value -= div*n;
	for(i=0;i<n;i++){
		*(arr+i) = div;
	}
	while (value > 0){
		for(i=0;i<n;i++){
			if(value <=0){
				break;
			}
			value--;
			*(arr+i) += 1;
		}
	}
}
int main() {
	int size;
    printf("The number of threads: ");
    scanf("%d",&size);
    int *arr = (int*)malloc(4*size);
    getValues(size,arr);
    int i;
    struct structure args[size];
    pthread_t threads[size];
    args[0].id = 1;
    args[0].start =1;
    args[0].end = *arr;
    pthread_create(&threads[0],NULL,printNums,&args[0]);
    for(i=1;i<size;i++){
    	args[i].id = i+1;
    	args[i].start = args[i-1].end+1;
    	args[i].end = args[i].start + *(arr+i)-1;
    	pthread_create(&threads[i],NULL,printNums,&args[i]);
	}
	for(i=0;i<size;i++){
		pthread_join(threads[i],NULL);
	}
	return 0;
}

