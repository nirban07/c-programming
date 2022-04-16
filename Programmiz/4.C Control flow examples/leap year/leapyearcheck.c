#include <stdio.h>

int main(){
	// Year is leap year if it is divisible by 4
	// or
	// it is divisible by 100 and 400

	// take input
	int year;
	printf("Enter the year: \n");
	scanf(" %d",&year);

	// perform check
	
	if( (year%400==0 || year%100!=0) &&(year%4==0))
		printf("It is a leap year");
	else
		printf("It is not a leap year");
	
	return 0;
}