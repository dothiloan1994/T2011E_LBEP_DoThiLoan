#include <stdio.h>

int main(){

	double amount = 4000;
	
	amount = amount*8/100 + amount;
	amount = amount*8/100 + amount;
	amount = amount*8/100 + amount;
	amount = amount*8/100 + amount;

	printf("So tien sau 4 nam la %lf",amount);
}