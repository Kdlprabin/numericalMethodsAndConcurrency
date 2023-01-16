#include <stdio.h>

struct employee
{
    char empName[20];
    int age;
    int salary;
};

void main(){
    FILE *file = fopen("employee.txt","w+");
    struct employee e[2];
    int i;
    for(i=0; i<2; i++){
        printf("Name : ");
        scanf("%s",e[i].empName);
        printf("Age : ");
        scanf("%d",&e[i].age);
        printf("Salary : ");
        scanf("%d",&e[i].salary);
    }
	for(i=0; i<2; i++){
        fputs("Name : ",file);
        fputs(e[i].empName, file);
        fputs("\nAge : ",file);
        fprintf(file, "%d\n", e[i].age);
        fputs("Salary : ",file);
        fprintf(file,"%d\n",e[i].salary);
    }
    for(i=0; i<2; i++){
        printf("Name: %s\n",e[i].empName);
        printf("Age: %d\n",e[i].age);
        printf("Salary: %d\n",e[i].salary);
    }
}
