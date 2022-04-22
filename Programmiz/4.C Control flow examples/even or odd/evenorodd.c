#include <stdio.h>

int main(){
	// a number is even or odd if it is divisible by 2

	int a;
	// do{
	// 	printf("Enter a number: ");
	// 	scanf("%d",&a);
	// 	if(a%2 == 0 ){
	// 		printf("This is an even number");
	// 	}
	// 	else{
	// 		printf("This is an odd number.");
	// 	}
	// }while(a!=0);
	
	while(a!=0){
		printf("Enter a number: ");
		scanf("%d",&a);
		if(a%2 == 0 ){
			printf("This is an even number\n");
		}
		else{
			printf("This is an odd number.");
		}
	}
	return 0;
}
