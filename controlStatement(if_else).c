#include<stdio.h>

int main(){
	
	int amount;
	 printf("Enter Your Shopping Amount");
	 scanf("%d", &amount);
	
	if(amount>499){
		printf("Congrats, You'll Get Free Delivery");
	}
	else{
		printf("Delivery Charges Will Applay");
	}
	return 0;
}
