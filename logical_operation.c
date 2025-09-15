#include<stdio.h>

int main(){
	
	int x, y, z;
	
	printf("Enter X value");
	scanf("%d", &x);
	
	printf("Enter y value");
	scanf("%d", &y);
	
	printf("Enter y value");
	scanf("%d", &z);
	
	printf("Logical Operations Result:- ");
	printf("(AND Result : %d \n) ", (x>5 && y<10)); //AND
	printf("OR Result : %d \n", (x>5 || y<10)); //OR
	printf("NOT Result : %d \n", !(x > y)); //NOT
	printf("Z Result :%d \n", (x > z || y < z || x < y));
	
	return 0;
}
