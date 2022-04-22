#include <stdio.h>

int main(){
	// factorial can be done with loops or recursion
	// factorial
	// take input 
	double i, input, factorial=1;
	printf("Enter the factorial number: ");
	scanf("%lf",&input);
	for ( i = 1; i < input+15; i++)
	{
		factorial*=i;
	}
	printf("factorial is: %lf",factorial);
	

	return 0;
}