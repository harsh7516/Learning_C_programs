#include<stdio.h>

int main(){
	int num1;
	int num2 ;
	printf("Enter the number");
	scanf("%d", &num1);
	printf("Enter the number");
	scanf("%d", &num2);
	
	printf("\n num1 + num2 = %d, ", num1 + num2);
	printf("\n num1 - num2 = %d, ", num1 - num2);
	printf("\n num1 * num2 = %d, ", num1 * num2);
	printf("\n num1 / num2 = %d, ", num1 / num2);
	printf("\n num1 | num2 = %d, ", num1 % num2);
	return 0;
}


