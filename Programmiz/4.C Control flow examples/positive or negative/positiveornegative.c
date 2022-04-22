#include <stdio.h>

int main(){
	double a ;
	printf("Enter a num : ");
	scanf("%lf",&a);
	if(a>0)
		printf("positive");
	else
		printf("negative");

	return 0;
}