/*
NAME:KIRUHI MARK
REG NO.PA106/G/28727/25
DESCRIPTION:ROOM OCCUPACY CODE 2D ARRAY 
*/

#include <stdio.h>

int main()
{
 int occupancy[5][10];
 int f,r ;
 int occupiedCount,vacantCount;
 
 
 printf("Enter room occupancy(1=occupied 0=vacant)");
 
 
 for(f=0;f<5;f++){
 	printf("\nfloor %d:\n",f+1);
	 for(r=0;r<10;r++){
	printf("room %d:\n",r+1);
	scanf("%d", &occupancy[f][r]);	
	
	  while (occupancy[f][r] != 0 && occupancy[f][r] != 1) {
                printf("Invalid input! Enter 1 for occupied or 0 for vacant: ");
                scanf("%d", &occupancy[f][r]);
            } 
	 }
 }
 
 printf("\n ROOM OCCUPANCY \n");
  for (f = 0; f < 5; f++) {
        occupiedCount = 0;
        vacantCount = 0;

        printf("Floor %d: ", f + 1);
        for (r = 0; r < 10; r++) {
            printf("%d ", occupancy[f][r]);
            if (occupancy[f][r] == 1)
                occupiedCount++;
            else
                vacantCount++;
        }

        printf("\nOccupied rooms: %d | Vacant rooms: %d\n\n", occupiedCount, vacantCount);
    }	
	return 0;
}