/*
NAME:MARK KIRUHI
REG NO:PA106/G/28727/25
DESCRIPTION:WATER BILL CALCULATOR PROGRAMME
*/

#include <stdio.h>

int main()
{
	int units,water_bill;
printf("Enter the number of units you consumed \n");
scanf("%d", &units);


if(units<=30){	
   water_bill=units*20;	
}
else if(units<=60){
   water_bill=	(30*20 )+((units-30)*25);}

else
{
   water_bill=(30*20 )+(30*25)+((units-60)*30);
}
printf("your water bill is %d \n" ,water_bill);	
	return 0;
}