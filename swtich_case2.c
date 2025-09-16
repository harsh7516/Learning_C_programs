#include<stdio.h>

int main(){
	int num1;
	int num2;
	char operator;
	
	
	
	printf("Enter First Number : ");
	scanf("%d", &num1);
	
	printf("Enter Second Number : ");
	scanf("%d", &num2);
	
	printf("Enter Which Operation You Want : (+, -, /, *)");
	scanf(" %c", &operator);
	
	switch(operator){
		case '+': printf("Addition is : %d" ,num1 + num2);
				break;
		
		case '-': printf("Addition is : %d" ,num1 - num2);
				break;
		
		case '/': printf("Addition is : %d" ,num1 / num2);
				break;
	
		case '*': printf("Addition is : %d" ,num1 * num2);
				break;
		
		default: printf("Invalid Operation");
	}
	return 0;
}
