#include <stdio.h>

struct employee {
  char name[50];
  char post[50];
  float salary;
};

struct employee get_employees(struct employee *e, int n) {
  int i, count = 0;
  struct employee result;
  for (i = 0; i < n; i++) {
    if (e[i].salary > 10000) {
      result.name[count] = e[i].name;
      result.post[count] = e[i].post;
      result.salary[count]= e[i].salary;
      count++;
    }
  }
  return result;
}

void mainTwo() {
  int i, n = 10;
  struct employee e[10], result;

  // Read the name, post, and salary of 10 employees
  for (i = 0; i < n; i++) {
    printf("Enter the name of employee %d: ", i + 1);
    scanf("%s", e[i].name);
    printf("Enter the post of employee %d: ", i + 1);
    scanf("%s", e[i].post);
    printf("Enter the salary of employee %d: ", i + 1);
    scanf("%f", &e[i].salary);
  }
  result = get_employees(e,n);
  for(i = 0; i < n; i++) {
    printf("%s %s %f", result.name, result.post, result.salary);
  }
}

