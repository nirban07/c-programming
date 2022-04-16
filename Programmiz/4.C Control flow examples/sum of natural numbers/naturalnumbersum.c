#include <stdio.h>

int main(){
	// sum = n*(n+1)/2
	int sum,n;
	printf("Sum of n natural number where n = \n");
	scanf("%d",&n);
	sum = n*(n+1)/2;
	printf("%d",sum);

	return 0;
}