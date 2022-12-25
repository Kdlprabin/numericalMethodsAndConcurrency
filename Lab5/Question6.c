
//Question 6

struct employee{
	char name[10];
	int salary;
	int workHour;
};

void highestSalary(struct employee *ptr,int n){
	int high = ptr->salary;
	int i;
	for(i=1;i<n;i++){
		if ((ptr+i)->salary > high){
			high = (ptr+i)->salary;
		}
	}
	printf("The highest salary is %d", high);
}


void mainSix(){
	int n, i;
	struct employee *ptr, emp;
	printf("Enter the number of employee for entering details: ");
	scanf("%d", &n);
	ptr = (struct employee*) calloc(n, sizeof(struct employee));
	for(i=0;i<n;i++){
		printf("Enter your name: ");
		scanf("%s", (ptr+i)->name);
		printf("Enter your salary: ");
		scanf("%d", &(ptr+i)->salary);
		printf("Enter your hours of work per day: ");
		scanf("%d", &(ptr+i)->workHour);
	}
	highestSalary(ptr,n);
}


