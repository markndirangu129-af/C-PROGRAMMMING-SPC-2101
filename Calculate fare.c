/*
NAME:KIRUHI MARK
REG NO.PA106/G/28727/25
DESCRIPTION:FARE CALCULATOR
*/

#include <stdio.h>

int total_fare(int distance_km);

void main()
{
int distance_km,total_fare;
printf("Enter distance travelled in KM: \n");
scanf("%d", &distance_km);
total_fare = (distance_km)*50;

printf("your total fare is= %d \n",total_fare);
}

int total_fare(int distance_km) {
    if (distance_km <= 0.0) return 0.0;
    return distance_km * 50.0;
} 