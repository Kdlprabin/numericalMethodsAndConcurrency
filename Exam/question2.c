#include<pthread.h>
#include<stdio.h>

struct value{
	int id;
	int start;
	int stop;
};

void *func(void *args){
	struct value p= *(struct value*)args;
	int i;
	for(i=p.start;i<p.stop;i++){
		printf("Thread %d : %d\n",p.id,i);
	}
}

void main(){
	pthread_t threads[5];
	struct value values[5];
	int i;
	for(i=0;i<5;i++){
		values[i].id = i+1;
		values[i].start= i*200 +1;
		values[i].stop = values[i].start+200;
		pthread_create(&threads[i],NULL,func,&values[i]);
	}
	for(i=0;i<5;i++){
		pthread_join(threads[i],NULL);
	}
}
