#include <stdio.h>
void display();

int main()
{
    // int b ,*c;
    // b= 10;
    // c = &b;
    // int **q;
    // q=&c;
    // int ***r;
    // r = &q;
    // printf("this is *q %p \n",*q);
    // printf("this is c %d \n",c);
    // printf("this is **q %d \n",**q);
    // printf("this is ***r %d \n",***r);

    // *c = 12;
    // printf("this is *q %p \n",*q);
    // printf("this is c %p \n",c);
    // printf("this is **q %d \n",**q);
    // printf("this is ***r %d \n",***r);
    // printf("%d\n",&b);
    // // printf("this is the address of b %d \n",b);

    int a[] = {21,31,42,52,63};
    int count = sizeof(a);
    // printf("sizeof a %d\n",sizeof(a));
    // for (int i = 0; i < count; i++)
    // {
    //     printf("%d\n",*(a+i));
    // }
    
    printf("%d\n",a[0]);
    // printf("%d\n",a+1);
    // arrays are passed by reference or arrrays are reference parameters
    
}
