#include <stdio.h>


void main(){
	FILE *fp = fopen("abc.txt","r");
	char message[50];
	char c = fgetc(fp);	
	while(!feof(fp)){
		fgets(message,50,fp);
		printf("%s",message);
	}
}
