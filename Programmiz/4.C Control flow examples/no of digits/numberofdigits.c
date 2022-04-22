#include <stdio.h>

int main(){
	int n= 12,c=0;
	while (n!=0)
	{
		n/=10;
		c++;
	}
	printf("this is the number of digits : %d",c);
	return 0;
}