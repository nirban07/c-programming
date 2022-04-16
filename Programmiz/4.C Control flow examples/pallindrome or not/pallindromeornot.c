#include <stdio.h>

int main(){
	int n = 1001,original = n,c=0,a;
	while(n!=0){
		a = n%10;
		c = c *10+a;
		n/=10;
	}
	// printf("this is original : %d",original);
	if(original == c ){
		printf("yes this is a pallindrome");
	}
	printf("The new number : %d",c);
	return 0;
}