#include <stdio.h>


struct employee{
	char name[10];
	char post[10];
	int salary;
};

int filter(struct employee e){
	if(e.salary>10000){
		return 1;
	}
}

void mainTwo(){
	int i;
	struct employee e[4], e1[4];
	for(i=0;i<4;i++){
		printf("Employee %d\n", i+1);
		printf("Enter your name: ");
		scanf("%s", &e[i].name);
		printf("Enter your post: ");
		scanf("%s", &e[i].post);
		printf("Enter your salary: ");
		scanf("%d", &e[i].salary);
	}
	printf("The following are the employees details of the employee with salary more than 10000\n");
	for(i=0;i<4;i++){
		if(filter(e[i])==1){
			e1[i] = e[i];
			printf("Name: %s, Post: %s, Salary: %d \n", e1[i].name, e1[i].post, e1[i].salary);
		} 
	}
}


