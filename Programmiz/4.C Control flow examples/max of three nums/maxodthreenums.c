#include <stdio.h>

int main(){
	int num,mx;
	for(int i=0;i<4;++i){
		printf("enter num %d\n",i);
		scanf("%d",&num);
		if(num>mx)
			mx=num;
	}
	printf("the greatest of all %d",mx);
	return 0;
}
