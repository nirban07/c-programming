#include <stdio.h>

int main(){
	char a;
	for(int i = 0;i<5;++i){
		printf("Enter a character: \n");
		scanf(" %c",&a);
		if(a == 'a'||a == 'u'||a == 'o'||a == 'i'||a == 'e'){
			printf("that's vowel.");
			continue;
		}
		printf("that's consonant");
			
	}
	
	return 0;
}
