/*
NAME:Mark Kiruhi
REG NO:PA106/G/28727/25
DESCRIPTION:Data bundle selection code
*/
#include <stdio.h>
int main(){
	int choice;
	printf("select a data bundle:\n");
	printf("1.100MB@ 50KES\n");
	printf("2.500MB@ 200KES\n");
	printf("3.1GB@ 350KES\n");
	printf("4.2GB@ 600KES\n");
	
	printf("Enter your choice(1-4)\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("you selected 100MB.cost=50KES\n");
			break;
		case 2:
			printf("you selected 500MB.cost=200KES\n");
			break;
		case 3:
			printf("you selected 1GB.cost=350KES\n");
			break;
		default:
			printf("you selected 2GB.cost=600KES\n");
			break;
	}
	return 0;
}