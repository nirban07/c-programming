#include <stdio.h>

int main(){
	int n = 12345,c=0,a;
	while(n!=0){
		a = n%10;
		c = c *10+a;
		n/=10;
	}
	printf("The new number : %d",c);
	return 0;
}