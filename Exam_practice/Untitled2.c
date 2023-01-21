#include <stdio.h>
struct info{
	char name[20];
	int age;
};
void main(){
	FILE *file = fopen("employee.txt","w+");
	struct info std;
	//write data
	std.name[20] = "Prabin";
	std.age = 20;
	fprintf(file,"%s, %d",std.name,std.age);
	
	//read data
	
	fclose(file);
}
