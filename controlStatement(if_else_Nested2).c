#include<stdio.h>

int main(){
	
	int temp;
	printf("Enter Temperature");
	scanf("%d", &temp);
	
	if(temp>=0 && temp<10){
			printf("Very 'COLD'");
	}
	else if(temp>=10 && temp<20){
		printf("'COLD'");
	}
	else if(temp>=20 && temp<35){
		printf("Temperature 'MODERATE'");
	}
	else if(temp>=35 && temp<45){
		printf("Temperature 'HOT'");
	}
	else{
		printf("Very 'HOT' Temperature");
	}
	
	return 0;
	}

