#include <stdio.h>
int main(){
	FILE *f = fopen("employee.txt","a");
	
	fprintf(f,"This is new employee information:\n");
	char name[20];
	int age;
	float salary;
	
	printf("Name : ");
	scanf("%s",name);
	printf("Age : ");
	scanf("%d",&age);
	printf("Salary : ");
	scanf("%f",&salary);
	
	fprintf(f,"Name: %s\n",name);
	fprintf(f,"Age: %d\n",age);
	fprintf(f,"Name: %f\n\n",salary);
	fclose(f);
	return 0;
}
