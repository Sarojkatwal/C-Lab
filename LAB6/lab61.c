/*A Proram to define function for addition ,subtraction,multiplication and division.*/
#include <stdio.h>
#include <conio.h>
int sum(int a,int b)
{
    int s;
    s=a+b;
    return s;
}
int sub(int a,int b)
{
    int sb;
    sb=a-b;
    return sb;
}
int product(int a,int b)
{
    int p;
    p=a*b;
    return p;
}
float divide(int a,int b)
{
    float q;
    q=(float)a/(float)b;
    return q;
}
int main()
{
   int x,y;
   printf("Enter two numbers: ");
  scanf("%d%d",&x,&y);
  printf("\nThe sum is %d.",sum(x,y));
  printf("\nThe difference is %d.",sub(x,y));
  printf("\nThe product is %d.",product(x,y));
  printf("\nThe quotient is %.2f.",divide(x,y));
   return 0;
}
