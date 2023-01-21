#include <stdio.h>
int main(){
	FILE *even = fopen("even.txt","r");
	FILE *odd = fopen("odd.txt","r");
	FILE *f = fopen("numbers.txt","a");
	
	char buffer[500];
	while(fgets(buffer,500,even) != NULL){
		fprintf(f,"%s",buffer);
	}
	while(fgets(buffer,500,odd) != NULL){
		fprintf(f,"%s",buffer);
	};
	fclose(even);
	fclose(odd);
	fclose(f);
	return 0;
}
