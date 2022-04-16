#include <stdio.h>
int main() {
	
   int x[4]={0,1,2,3};
   int i;

   for(i = 0; i < 4; ++i) {
      printf("&x[%d] = %p\n", i, &x[i]);
   }

   printf("Address of array x: %p", x);

   return 0;
}


// &x[0]  ==  x   ==  address
// x[0]   ==  *x
