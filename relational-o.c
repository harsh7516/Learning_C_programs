#include<stdio.h>

int main(){
	
	int num1 , num2;
	printf("Enter 1st number");
	scanf("%d", &num1);
	printf("Enter second number");
	scanf("%d", &num2);
	
	printf("\n Relational Operations Result");
	printf("num1==num2 : %d \n", num1 == num2);
		printf("num1!=num2 : %d \n", num1 != num2);
			printf("num1>num2 : %d \n", num1 > num2);
				printf("num1<num2 : %d \n", num1 < num2);
					printf("num1>=num2 : %d \n", num1 >= num2);
						printf("num1<=num2 : %d \n", num1 <= num2);
	return 0;
}
