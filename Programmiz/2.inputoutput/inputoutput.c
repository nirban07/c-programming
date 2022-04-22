#include <stdio.h>

int main(){
	// input
	printf("C is cool\n");

	// inteeger output
	int year =2000;
	printf("%d\n",year);
	// float and double output
	float pi = 3.14;
	double number = 2.1343;
	printf("pi = %f \nnumber = %lf\n",pi,number);

	// print char
	char a = 'a';
	printf("%c\n",a);

	// output

	// int testinteger;
	// printf("Give a number: ");
	// scanf("%d",&testinteger);
	// printf("Given integer by you is : %d\n",testinteger);

	// // float and double input and output
	// float f;
	// double d;
	// printf("Gice your favorite single floating point number: ");
	// scanf("%f",&f);
	// printf("Give your favorite Double floating point number: ");
	// scanf("%lf",&d);
	// printf("you entered %f and %lf \n12",f,d);

	// char inputoutput %c

	// Problem the scanf is being skipped @@@@@@@
	char chr;
	printf("Give the first char of your name: ");
	scanf("%c",&chr);
	printf("you entered: %c\n",chr);
	printf("the ASCII value of the char you entered: %d",chr);


	return 0;
}
