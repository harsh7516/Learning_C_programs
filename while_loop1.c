#include<stdio.h>

int main(){
	int battery; //initialization
	while(battery<=100){
		printf("battery %d\n ", battery);
		battery += 2;
	}
	
	printf("Battery Empty");
}
