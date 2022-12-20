#include <stdio.h>
#include <string.h>

struct student{
	char name[10];
	int age;
};

void mainTwo(){
	struct student s[4];
	int i;
	for(i = 0; i <4; i++){
		printf("Enter the name : \n");
		gets(s[i].name);
		printf("Enter the age : \n");
		scanf("%d",&s[i].age);
	}
	for(i = 0; i<4;i++){
		displayStruct(s[i]);
	}
}

void displayStruct(struct student s){
	printf("name : %s \nage: %d",s.name,s.age);
}
