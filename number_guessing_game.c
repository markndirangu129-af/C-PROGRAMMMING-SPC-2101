/*
NAME:MARK NDIRANGU
REG NO.PA106/G/28727/25
DESCRIPTION:A NUMBER GUESSING GAME PROGRAMME
*/

# include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	float secret_number,guess=0,attempt=0;
	srand(time(0));
	secret_number=rand()%20+1;
	
	printf("NUMBER GUESSING GAME\n");
	printf("SELECT NUMBER BETWEEN 1 AND 20\n");
	
	while(guess =secret_number){
	printf("Enter your guess\n");
	scanf("%f", &guess);
	attempt++;
	if(guess>secret_number){
		printf("too high\n");
	}else if(guess<secret_number){
		printf("too low\n");
	}else{
		printf("congratulations! you guessed the number\n");
		printf("it took you %f attempt\n",attempt);
	}	
	}
	return 0;
}