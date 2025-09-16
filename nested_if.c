#include<stdio.h>

int main(){
	
	int ticket, idProof, luggage;
	
	printf("Do you Have a Ticket");
	scanf("%d", &ticket);
	
	if(ticket==1){
		printf("Do you have a ID Proof (1 = yes, 0 = no)" );
		scanf("%d", &idProof);
		if(idProof == 1){
			printf("Is Luggauge withing 20 kg? (1 = yes, 0 = no)");
			scanf("%d", &luggage);
			if(luggage == 1){
				printf("Checkin Succesfully");
				
			}
			else{
				printf("Extra Luggage Charges will be applied");
			}
		}
		else{
			printf("ID Proof Required");
		}
	}
	else{
		printf("Ticket Required");
	}
		return 0;
	}
	


