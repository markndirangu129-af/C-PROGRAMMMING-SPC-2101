/*
NAME:Mark_Ndirangu
REG_NO:PA106/G/28727/25
DESCRIPTION:A_PROGRAMME_TO_CHECK_STUDENT_ELIGIBILITY_TO_DO_FINAL_EXAM
*/

#include <stdio.h>
int main()
{
	int attedance,average_marks;
	
printf("\n ENTER YOUR PERCENTAGE ATTEDANCE \t");
scanf("%d" ,&attedance);

printf("\n ENTER YOUR AVERAGE MARKS \n");
scanf("%d" ,&average_marks);

if((attedance>=75)&&(average_marks>=40))
	printf("\n ELIGIBLE");
else
{
	printf("\n NOT ELIGIBLE");
}
	return 0;
}