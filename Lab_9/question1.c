#include <stdio.h>
#include <pthread.h>

void *thread1(void *p){
	int i;
	for(i=1;i<500;i++){
		printf("Thread 1: %d\n",i);
	}
}
void *thread2(void *p){
	int i;
	for(i=500;i<=1000;i++){
		printf("Thread 2: %d\n",i);
	}
}
int main(){
	pthread_t id1,id2;
	pthread_create(&id1,NULL,thread1,NULL);
	pthread_create(&id2,NULL,thread2,NULL);
	pthread_join(id1,NULL);
	pthread_join(id2,NULL);
	return 0;
}
