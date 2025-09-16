#include<stdio.h>

int main(){
	
	int open, food, pay;
	
	printf("Is Reataurent Open");
	scanf("%d", &open);
	
	if(open==1){
		printf("Food is ready (1 = yes, 0 = no)" );
		scanf("%d", &food);
		if(food == 1){
			printf("Payment Done? (1 = yes, 0 = no)");
			scanf("%d", &pay);
			if(pay == 1){
				printf("Payment Succesfully");
				
			}
			else{
				printf("Please Pay");
			}
		}
		else{
			printf("Wait For Food");
		}
	}
	else{
		printf("Reataurent is Closed");
	}
		return 0;
	}
	


