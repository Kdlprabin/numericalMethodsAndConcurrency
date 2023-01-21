#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main(){
    int a = 0;
    int b = 1;
    printf("a: %d, b: %d\n",a,b);
    swap(&a,&b);
    printf("a: %d, b: %d\n",a,b);
}