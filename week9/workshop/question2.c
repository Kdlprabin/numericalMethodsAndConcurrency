#include<stdio.h>
#include<pthread.h>
struct structure{
	int id;
	int start;
	int end;
}s1,s2,s3,s4,s5;

void *printNums(void *p){
	struct structure *value = (struct structure*)p;
	int i;
	for(i = value->start;i<value->end;i++){
		printf("Thread %d: %d\n",value->id,i);
	}
}

void main(){
	pthread_t threads[5];
	struct structure args[5] = {s1,s2,s3,s4,s5};
	int i;
	for(i=0;i<5;i++){
		args[i].id = i+1;
		args[i].start = 1+i*200;
		args[i].end = (i+1)*200;
		pthread_create(&threads[i],NULL,printNums,&args[i]);
	}
	for(i = 0; i<5;i++){
		pthread_join(threads[i],NULL);
	}
}
