#include <stdio.h>

struct Student{
	int rollNo;
	int marks;
	struct student_info{
		char name[10];
		int age;
		char birthDate[10];
	}std;
};


struct Student getInfo(){
	struct Student s;
	printf("Enter the name: ");
	scanf("%s", &s.std.name);
	printf("Enter the age: ");
	scanf("%d", &s.std.age);
	printf("Enter the date of birth: ");
	scanf("%s", &s.std.birthDate);
	printf("Enter the roll no: ");
	scanf("%d", &s.rollNo);
	printf("Enter the marks: ");
	scanf("%d", &s.marks);
	return s;
}

void mainFour(){
	struct Student s[3];
	int i;
	for(i=0;i<3;i++){
		printf("\nFor student %d\n", i+1);
		s[i] = getInfo();
	}
	printf("The details of the three students are: \n");
	for(i=0;i<3;i++){
		printf("\nStudent %d:\nName: %s\nAge: %d\nDate of Birth: %s\nRoll No: %d\nMarks: %d\n", i+1,s[i].std.name, s[i].std.age, s[i].std.birthDate, s[i].rollNo, s[i].marks);
	}
}

