#include <stdio.h>

void swapNumbers(int *num1, int *num2) { 
int temp = *num1; 
*num1 = *num2; 
*num2 = temp; 
}
int main() { 
int var1, var2; 
printf("Enter Value of first variable is : "); 
scanf("%d", &var1); 
printf("Enter Value of second variable is : "); 
scanf("%d", &var2); 
swapNumbers(&var1, &var2); 
printf("After Swapping: var1 = %d, var2 = %d", var1, var2); 
return 0; 
}
