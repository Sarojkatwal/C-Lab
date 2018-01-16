/*A Proram to generate fibonacci series.*/
#include <stdio.h>
#include <conio.h>
int p,q;
void first();
void second();
int main()
{
   int a=5,b=4,c,x;
   printf("Enter the value of p and q : ");
  scanf("%d%d",&p,&q);
  c=p+q;
  x=a+b;
  printf("\nIn main function c=%d\tx=%d\n",c,x);
   first();
   second();
   return 0;
}
void first()
{
    int a=10,b=20,c,x;
    c=p+q;
    x=a+b;
     printf("\nIn first user defined function c=%d\tx=%d\n",c,x);
}
void second()
{
    int a=50,b=10,c,x;
    c=p+q;
    x=a+b;
     printf("\nIn second user defined function c=%d\tx=%d\n",c,x);
}
