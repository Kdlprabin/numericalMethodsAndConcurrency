#include <stdio.h>

struct employee{
	char empName[20];
	int age;
	int salary;
};

void question1(){
	int i;
	FILE *fp;
	fp = fopen("employee.txt","w+");
	struct employee e[3];
	for(i = 0; i < 3; i++){
		printf("For employee %d : \n", i+1);
		printf("Name : ");
		scanf("%s",e[i].empName);
		printf("Age :");
		scanf("%d",&e[i].age);
		printf("Salary : ");
		scanf("%d",&e[i].salary);
	}
	for(i = 0; i < 3; i++){
		fprintf("For employee %d : \n", i+1);
		fprintf(fp,"Name : %s\n",e[i].empName);
		fprintf(fp,"Age : %d\n",e[i].age);
		fprintf(fp,"Salary : %d\n",e[i].salary);
	}
	fclose(fp);
}

void question2(){
	FILE *fp, *nfp;
	fp = fopen("employee.txt","r");
	nfp = fopen("newemployee.txt","w");
	
	char buffer[500];
		
	while(fgets(buffer,500,fp) != NULL){
		fputs(buffer,nfp);
	}
	fclose(fp);
	fclose(nfp);
}

void question3(){
	FILE *fp;
	struct employee e;
	fp = fopen("newemployee.txt","a");
	
	printf("Enter the new employee information: \n");
	printf("Name : ");
	scanf("%s",e.empName);
	printf("Age :");
	scanf("%d",&e.age);
	printf("Salary : ");
	scanf("%d",&e.salary);

	fprintf(fp,"\nFor new employee information : \n");
	fprintf(fp,"Name : %s\n",e.empName);
	fprintf(fp,"Age : %d\n",e.age);
	fprintf(fp,"Salary : %d\n",e.salary);
	
	fclose(fp);	
}

void question4(){
	FILE *odd, *even;
	odd = fopen("odd.txt","w");
	even = fopen("even.txt","w");
	int num;
	char input[5];
	while(strcmp(input,"no") != 0){
		printf("Enter a number : ");
		scanf("%s",input);
		num = atoi(input);
		if(strcmp(input,"no") == 0){
			break;
		}
		if(num%2 == 0){
			fprintf(even,"%d\n",num);
		}else if(num%2 == 1){
			fprintf(odd,"%d\n",num);
		}
	}
}

int  main(){
	question1();
	return 0;
}
