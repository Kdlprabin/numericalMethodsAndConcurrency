#include <stdio.h>

int main(){
	FILE *f = fopen("employee.txt","r");
	char buffer[500];
	while(fgets(buffer,500,f) != NULL){
		printf(buffer);
	}
	fclose(f);
	return 0;S
}
