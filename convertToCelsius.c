/*
NAME:KIRUHI MARK
REG NO.PA106/G/28727/25
DESCRIPTION:CONVERT TO CELCIUS
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit);


void main(){
float fahrenheit, Celsius;
printf("Enter fahrenheit to be converted to celcius \n");
scanf("%f", &fahrenheit);
	
Celsius = convertToCelsius(fahrenheit);

printf("Temperature in celsius is = %.2f \n",Celsius);	

}


float convertToCelsius(float fahrenheit)
 {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}