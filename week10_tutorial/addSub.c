#include <stdio.h>
#include <pthread.h>
struct data{
	int a;
	int b;
	int oper;
};
struct data d1;
struct data d2;
int result1;

void* calc(void* p){
	struct data d = *(struct data*)p;
	int a = d.a;
	int b = d.b;
	if(d.oper == 1){
		result1 = a+b;
	}else if(d.oper == 0){
		result1 = a-b;
	}
	pthread_exit(&result1);
}

void main(){
	d1.a = 10;
	d1.b = 20;
	d1.oper = 1;
	pthread_t id1, id2;
	void *sum;
	pthread_create(&id1,NULL,calc,&d1);
	pthread_join(id1,&sum);
	printf("%d\n",*(int*)sum);
	
	d2.a = 20;
	d2.b = 10;
	d2.oper = 0;
	void *sub;
	pthread_create(&id2,NULL,calc,&d2);
	pthread_join(id2,&sub);
	printf("%d\n",*(int*)sub);
}

