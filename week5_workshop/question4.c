#include <stdio.h>

typedef struct{
	char name[10];
	char post[20];
	int salary;
}employee;


int checkSalary(employee a){
	if(a.salary > 10000){
		return 1;
	}else{
		return 0;
	}
}

employee addEmployee(employee a){
	printf("Enter the name post and salary of the employee:\n");
	scanf("%s %s %d",&a.name,&a.post,&a.salary);
	return a;
}


void displayEmployee(employee a){
	printf("The employee are : %s %s %d\n",a.name,a.post, a.salary);
}


void mainFour(){
	employee a;
	a = addEmployee(a);
	int value = checkSalary(a);
	printf("%d",value);
}
