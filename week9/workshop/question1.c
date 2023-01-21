#include<stdio.h>
#include<pthread.h>
struct value{
	int threadId;
	int start;
	int end;
}s1,s2;

void *printing(void *p){
	struct value *data = (struct value*)p;
	int i;
	for(i = data->start ;i < data->end; i++){
		printf("Thread %d :%d\n",data->threadId,i);
	}
}

void main(){
	pthread_t thread1, thread2;
	s1.threadId = 1;
	s1.start =1;
	s1.end = 500;
	s2.threadId=2;
	s2.start=500;
	s2.end = 1001;
	pthread_create(&thread1,NULL,printing,&s1);
	pthread_create(&thread2,NULL,printing,&s2);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
}

