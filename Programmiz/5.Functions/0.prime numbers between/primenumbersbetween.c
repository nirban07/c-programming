#include <stdio.h>
int checkprime(int n);
int main(){
	// take input of a range
	// loop thriugh range
	// take each value in the range and output if prime

	int i,flag,n1,n2;
	printf("Give a range of numbers to find prime");
	scanf("%d %d",&n1,&n2);

	if (n1>n2)
	{
		n1=n1-n2;
		n2=n1+n2;
		n1=n2-n1;
	}
	

	for ( i = n1 ; i < n2; i++)
	{
		flag = checkprime(i);
		if(flag==0){
			printf(" %d",i);
		}
	}
	return 0;
}

int checkprime(int n){
	int flag=0;
	for (int i = 2; i <= n/2; i++)
	{
		if (n%i==0)
		{
			flag=1;
			break;
		}
		
	}
	
	return flag;
}