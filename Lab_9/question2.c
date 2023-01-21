#include <stdio.h>
#include <pthread.h>

void *primes(void *p){
	int i, j;
	int start = *(int*)p;
	int end = start +250;
	for(i=start;i<=end;i++){
		int is_prime = 1;
		for(j=2;j<=i/2; j++){
			if(i%j == 0){
				is_prime = 0;
				break;
			}
		}
		if(is_prime){
			printf("%d\n",i);
		}
	}
}

int main(){
	pthread_t id1, id2;
	int start1 = 2;
	int start2 = 253;
	pthread_create(&id1,NULL,primes,&start1);
	pthread_create(&id2,NULL,primes,&start2);
	pthread_join(id1,NULL);
	pthread_join(id1,NULL);
	return 0;
}
