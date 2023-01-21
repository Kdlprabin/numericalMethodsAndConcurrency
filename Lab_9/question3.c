#include<stdio.h>
#include<pthread.h>
struct structure{
	int id;
	int start;
	int end;
};

void *printNums(void *p){
	struct structure *value = (struct structure*)p;
	int i;
	for(i = value->start;i<value->end;i++){
		printf("Thread %d: %d\n",value->id,i);
	}
}

void main(){
	int num_thread;
	printf("Enter the number of threads: ");
	scanf("%d",&num_thread);
	pthread_t threads[num_thread];
	struct structure args[num_thread];
	int i;
	for(i=0;i<num_thread;i++){
		args[i].id = i+1;
		args[i].start = 1+i*200;
		args[i].end = (i+1)*200;
		pthread_create(&threads[i],NULL,printNums,&args[i]);
	}
	for(i = 0; i<num_thread;i++){
		pthread_join(threads[i],NULL);
	}
}
