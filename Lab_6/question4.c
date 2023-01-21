#include <stdio.h>

int main(){
	FILE *even = fopen("even.txt","a");
	FILE *odd = fopen("odd.txt","a");
	char input[10];
	while(strcmp(input,"no")!=0){
		printf("Please enter a number: ");
		scanf("%s",input);
		if(strcmp(input,"no") == 0){
			break;
		}
		int num = atoi(input);
		if(num% 2 == 0){
			fprintf(even,"%s\n",input);
		}
		else if(num%2 == 1){
			fprintf(odd,"%s\n",input);
		}
	}
	fclose(even);
	fclose(odd);
	return 0;
}
