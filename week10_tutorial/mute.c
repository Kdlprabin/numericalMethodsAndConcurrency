#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
int shared = 10;

void *func1(void *p){
	int x = shared;
	x+=1;
	sleep(1);
	shared = x;
	printf("shared in x = : %d\n",shared);
}

void *func2(void *p){
	int y = shared;
	y-=1;
	shared = y;
	printf("shared in y = : %d\n",shared);
}

void main(){
	pthread_t id1, id2;
	pthread_create(&id1,NULL,func1,NULL);
	pthread_create(&id2,NULL,func2,NULL);
	pthread_join(id1,NULL);
	pthread_join(id2,NULL);
	printf("shared at last = : %d\n",shared);
}
