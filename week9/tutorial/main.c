#include<stdio.h>
#include<windows.h>
#include<pthread.h>
void *first(void *p){
	int i;
	for(i =0 ; i<5;i++){
		Sleep(2);
		printf("Hello i am from first therad\n");
	}
}

void *second(void *p){
	int i;
	for(i =0 ; i<3;i++){
		Sleep(2);
		printf("Hello i am from second therad\n");
	}
}

//void main(){
//	pthread_t thread1, thread2;
//	pthread_create(&thread1, NULL, first, NULL);
//	pthread_create(&thread2, NULL, second, NULL);
//	pthread_join(thread1,NULL);
//	pthread_join(thread2,NULL);
//}
