#include <pthread.h>
#include <stdio.h>

#define NUM_THREADS 4
#define ARRAY_SIZE 10

int array[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int search_value;
int found = 0;

void* search(void* arg) {
    int thread_num = *(int*)arg;
    int start = (ARRAY_SIZE / NUM_THREADS) * thread_num;
    int end = start + (ARRAY_SIZE / NUM_THREADS);
    int i;
    for (i = start; i < end; i++) {
        if (array[i] == search_value) {
            printf("Element %d found by thread %d\n", search_value, thread_num+1);
            found = 1;
            break;
        }
    }
}

int main() {
    printf("Enter an element to search for: ");
    scanf("%d", &search_value);
    pthread_t threads[NUM_THREADS];
    int thread_args[NUM_THREADS];
    int i;
    for (i = 0; i < NUM_THREADS; i++) {
        thread_args[i] = i;
        pthread_create(&threads[i], NULL, search, &thread_args[i]);
    }
    for (i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }
    if(!found){
    	printf("Element %d not found\n", search_value);
	}
    return 0;
}

