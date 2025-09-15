#include<stdio.h>

int main (){
	int apple_price;
	int oil_price ;
	int milk_price;
	
	int paid;

	
	printf("how much apple you want");
	scanf("%d",&apple_price);
	printf("how much apple you want");
	scanf("%d",&oil_price);
	printf("how much apple you want");
	scanf("%d",&milk_price);
	
    int total = (apple_price * 155) + (oil_price * 100) + (milk_price * 60);
    printf("%d", total);


	printf("How much will you pay");
	scanf ("%d", &paid);

	printf("return amount = %d" ,paid - total);
	
	
	return 0;
}
