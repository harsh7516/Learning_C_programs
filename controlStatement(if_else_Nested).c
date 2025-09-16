#include<stdio.h>

int main(){
	
	int age;
	printf("enter Your AGE");
	scanf("%d", &age);
	
	if(age<=5){
		printf("Ticket FREE");
	}
	else if(age>=5 && age<12){
		printf("HALF Ticket");
	}
	else if(age>=12 && age<60){
	printf("Full Ticket");
	}
	else if(age>=60 && age<75){
	printf("Cenior Citizon HALF Ticket");
	}
	else {
		printf("FREE Ticket");
	}
	
	
	return 0;
}
