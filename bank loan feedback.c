/*
NAME:Mark Kiruhi
REG NO.:PA106\G\28727\25
DESCRIPTION:A C PROGRAMME TO CHECK LOAN`S AGE AND INCOME REQUIREMENTS
*/

#include <stdio.h>
int main(){
	int age,income;
	
	printf("\n ENTER YOUR AGE \n \a");
	scanf("%d", &age);
	
	printf("\nENTER YOUR ANNUAL INCOME \n \a");
	scanf("%d", &income);
	


	if((age >=21)&&(income >=21000)){
		printf("CONGRATULATIONS YOU QUALIFY FOR THE LOAN");
	}
	else
	{
		printf("UNFORTUNATELY,WE ARE UNABLE TO OFFER YOU A LOAN AT THIS TIME");
	}	
	return 0;
}