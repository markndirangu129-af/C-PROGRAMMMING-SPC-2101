/*
NAME:KIRUHI MARK
REG NO.PA106/G/28727/25
DESCRIPTION:WEEKLY REVENUE TRACKER USING 1D ARRAY 
*/

#include <stdio.h>
int main()
{
int revenue[7];
int r, sum = 0;
int average;


for(r=0;r<7;r++){
printf("Enter the revenue collected today :\n");
	scanf("%d", &revenue[r]);
}

printf("\nRevenues collected are:\n");
for(r=0;r<7;r++){
	printf("day %d: %d\n",r + 1, revenue[r]);
	
	sum+=revenue[r];
}

average = sum / 7;
printf("your total weekly revenue is: %d\n", sum);
printf("your average weekly revenue is: %d\n", average);	
	return 0;
}