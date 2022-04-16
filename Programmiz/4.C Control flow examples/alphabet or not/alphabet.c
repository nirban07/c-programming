#include <stdio.h>
#include <ctype.h>

int main(){
	printf("%d",'A');
	printf("%d",'Z');
	printf("%d",'a');
	printf("%d",'z');
	char a;
	printf("Enter a character: ");
	scanf(" %c",&a);
	if(isalpha(a))
		printf("Small case char");
	else
		printf("Captical Case Char");
	return 0;
}
