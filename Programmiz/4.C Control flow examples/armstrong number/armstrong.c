#include <stdio.h>
#include <math.h>

int main(){
	int armst=0,n = 153,a;
	int origi = n;
	while (n!=0)
	{
		a=n%10;
		armst += pow(a,3);
		n/=10;
	}
	if(origi==armst){
		printf("Yeah armstrong %d",armst);
	}
	
	return 0;
}