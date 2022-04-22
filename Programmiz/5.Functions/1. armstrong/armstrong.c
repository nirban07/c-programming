#include <stdio.h>
#include <math.h>
int armstrong(int n, int digits);
int numberOfDigits(int n);
int main(){
	// take a input 
	// check armstrong
	//      divide by 10 until rem =10 => number of digits
	//      raise the num to the power of rem and add them 
	//      compare if the new num == previous num
	int num;
	printf("Give a num");
	scanf("%d",&num);
	int digits = numberOfDigits(num);
	int newnumb = armstrong(num,digits);
	if(num == newnumb){
		printf("it a armst number");
	}
	return 0;
}

int numberOfDigits(int n){
	int digits=0;
	while (n!=0)
	{
		n=n/10;
		digits++;
	}
	return digits;
}

int armstrong(int n, int digits){
	int digit, armst = 0;
	while (n!=0)
	{	
		digit =n%10;
		armst += pow(digit,digits);
		n/=10;
		 
	}

	return armst;
}