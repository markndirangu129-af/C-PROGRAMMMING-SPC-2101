/*
NAME:KIRUHI MARK
REG NO.PA106/G/28727/25
DESCRIPTION:ELECTRIC BILL CALCULATOR
*/

#include <stdio.h>

int electric_bill(int units);

void main(){
	int units,electricbill,bill;
	printf("enter units consumed:");
	scanf("%d", &units);
	electricbill = electric_bill(units);
	
	printf("The electric bill is= %d \n",electricbill);
}
int electric_bill(int units) {
    if (units <= 0) return 0;

    int bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }

    return bill;
}