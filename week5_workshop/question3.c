#include <stdio.h>

typedef struct{
	char name[10];
	int rollNum;
	int marks;
}student;


student add_student(student a){
	printf("Enter the name rollNum and marks:");
	scanf("%s %d %d", &a.name, &a.rollNum,&a.marks);
	return a;
}


void display_student(student a){
	printf("The students are : %s %d %d\n",a.name,a.rollNum, a.marks);
}

void mainThree(){
	student a[10];
	int i;
	for(i =0; i < 10; i++){
		a[i] = add_student(a[i]);
	}
	
	for(i =0; i < 10; i++){
		display_student(a[i]);
	}
}
