#include <stdio.h>

int main(){
	int a, b,c;
	printf("enter two numbers : ");
	scanf("%d %d",&a,&b);
	printf("the numbers given by you are : a = %d and b = %d\n",a,b);
	c =a;
	a=b;
	b=c;
	// after swap
	printf("the numbers are swap are : a = %d and b = %d\n",a,b);
	// can also be performed by keeping the diff in mind and adding
	//  and subtracting the diff done in fucntions foolder

	a = a-b;
	
	return 0;
}