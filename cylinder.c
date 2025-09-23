/*
NAME:Mark Kiruhi
REG NO.PA106\G\28727\25
DESCRIPION:a c programme to calculate volume and SA of a cylinder
*/
#include <stdio.h>
int main(){
    float radius,height,surfacearea,volume;
    float pi=3.142;
    
    printf("\nVOLUME AND SA CALCULATOR BY MARK\n");
    
    printf("\nENTER HEIGHT\n");
    scanf("%f", &height);
    
    printf("\nENTER RADIUS\n");
    scanf("%f", &radius);
    
    volume=pi*radius*radius*height;
    
    surfacearea=2*pi*radius*radius+2*pi*radius+radius
	*height;
    
    printf("\nYOUR VOLUME IS.%f", volume);
    
    printf("\nYOUR SURFACE AREA IS.%f" ,surfacearea);
	
	return 0;
}