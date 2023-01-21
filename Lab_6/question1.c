#include <stdio.h>
struct employee{
	char name[20];
	int age;
	float salary;
};

int main(){
	int num = 3;
	struct employee e[num];
	FILE *f = fopen("employee.txt","w+");
	int i;
	for(i =0; i<num;i++){
		printf("Enter details of employee %d:\n",i+1);
		printf("Name: ");
		scanf("%s",e[i].name);
		printf("Age: ");
		scanf("%d",&e[i].age);
		printf("Salary: ");
		scanf("%f",&e[i].salary);
	}
	for(i=0;i<num;i++){
		fprintf(f,"Name: %s\n",e[i].name);
		fprintf(f,"Age: %d\n",e[i].age);
		fprintf(f,"Salary: %f\n\n",e[i].salary);
	}
	fclose(f);
	return 0;
}
