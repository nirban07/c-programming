#include <stdio.h>

int main(){
	// finonnaci f0+f1+ f2 f3 f4 f5 f6 = f3 => 0+1=1
	// using lo   0 1    1  2  3  5 
	int i,n,c,a = 0,b=1;
	n= 5;
	switch (n)
	{	
	case 0:
		b= 0;
		break;
	case 1:
		b= 1;
	default:
		for (i = 0; i < n; i++)
		{
			// add a+b
			c = b;
			b = a+b;
			a = c;
			printf("this is b when i=%d b= %d\n",i,b);
		}
		break;
	}
	
	printf("this is the answer 5 %d",b);
	return 0;
}