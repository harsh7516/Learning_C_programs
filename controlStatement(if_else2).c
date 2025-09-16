#include<stdio.h>

int main(){
	
	int percentage;
	printf("Enter Yout Percentage");
	scanf("%d", &percentage);
	
	if(percentage>=35){
		printf("Congrats You'r Pass");
	}
	else{
		printf("Sorry You'r Fail");
	}
	
	return 0;
}
