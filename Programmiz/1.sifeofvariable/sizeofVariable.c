#include <stdio.h>

int main(){
	short a ;
	long b;
	long long c;
	long double d;


	printf("size of short a : %lu bytes \n", sizeof(a));
	printf("size of long b : %lu bytes \n", sizeof(b));
	printf("size of long c : %lu bytes \n", sizeof(c));
	printf("size of long d : %lu bytes \n", sizeof(d));
	return 0;
}
