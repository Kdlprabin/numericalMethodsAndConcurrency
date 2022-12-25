#include <stdio.h>

struct student{
	char name[50];
	int rollNumber;
	int marks;
};

void read_info(struct student *s, int n){
	int i;
	for(i =0; i<n;i++){
		printf("Enter the name of the student %d : ",i+1);
		scanf("%s",&s[i].name);
		printf("Enter the roll number of student %d : ", i + 1);
    	scanf("%d", &s[i].rollNumber);
    	printf("Enter the marks of student %d : ", i + 1);
    	scanf("%d", &s[i].marks);
	}
}
void display_info(struct student *s, int n){
	int i;
	for(i =0; i < n; i++){
		printf("Student no : %d\n",i+1);
		printf("Name : %s\n",s[i].name);
		printf("Roll Number : %d\n",s[i].rollNumber);
		printf("Marks : %d\n",s[i].marks);
	}
}
void mainOne(){
	int n = 2;
	struct student s[n];
	read_info(s,n);
	display_info(s,n);
}
