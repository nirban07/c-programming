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

    // int a[2][3] = {21,31,42,52,63};
    // int count = sizeof(a);
    // printf("sizeof a %d\n",sizeof(a));
    // for (int i = 0; i < count; i++)
    // {
    //     printf("%d\n",*(a+i));
    // }
    
    // printf("%d\n",*a);
    // printf("%d\n",*();
    // arrays are passed by reference or arrrays are reference parameters
    // int a,b,*p,*q;
    // a = 0;
    // b = 1;
    // p = &a;
    // q= &b;
    // printf("this is p %d\n",p);
    // printf("this is q %d\n",q);
    // p=q;
    // printf("%d\n",*p);
    // printf("%d\n",*q);
    // printf("this is p %d\n",p);
    // printf("this is q %d\n",q);
    // *p = 12;
    // printf("%d\n",*p);
    // printf("%d\n",*q);
    // printf("this is p %d\n",p);
    // printf("this is q %d\n",q);
    // printf("address of a %d\n",&a);
    // printf("address of b %d\n",&b);
    // printf("%d\n",a);
    // *p=10;
    // printf("%d\n",a);
    // int a =4;
    // int *p;
    // p = &a;
    // printf("%d\n",*p);
    // p++;
    // printf("%d\n",*p);
    // printf("%d\n",a);

    // typedef struct Node{
    //     int data;
    //     Node *next;
    // };
    int a ,b;
    float ab, bc;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&ab,&bc);
    printf("%d %d",a+b,(a>b) ? a-b : b-a);
    printf("%f %f",ab+bc,ab-bc);
}
