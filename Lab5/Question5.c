#include <stdio.h>


struct employee{
	char name[10];
	int salary;
	int workHour;
};

struct employee emp_info(){
	struct employee e;
	printf("Enter your name: ");
	scanf("%s", &e.name);
	printf("Enter your salary: ");
	scanf("%d", &e.salary);
	printf("Enter your hours of work per day: ");
	scanf("%d", &e.workHour);
	return e;
}

void display_emp(struct employee em[5]){
	int i;
	for(i=0;i<5;i++){
		if(em[i].workHour==8){
			em[i].salary = em[i].salary + 50;
		} else if(em[i].workHour==10){
			em[i].salary = em[i].salary + 100;
		} else if(em[i].workHour>=12){
			em[i].salary = em[i].salary + 150;
		} 
		printf("\nEmployee %d:\nName: %s\nFinal Salary: %d\n",i+1, em[i].name, em[i].salary);
	}
}

void mainFive(){
	struct employee e[5];
	int i;
	for(i=0;i<5;i++){
		printf("\nEnter for Employee %d\n", i+1);
		e[i] = emp_info();
	}
	printf("\nThe employees with their name and increased salaries are: \n");
	display_emp(e);
}

