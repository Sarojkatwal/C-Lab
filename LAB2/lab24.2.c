/*A C-program to swap two variables value using third variable.*/
#include <stdio.h>
int main()
{
 int a,b,u;
 printf("Enter the two numbers a and b :");
 scanf("%d%d",&a,&b);
 printf("\nBefore swapping a=%d and b=%d",a,b);
 u=a;
 a=b;
 b=u;
 printf("\nAfter swapping a=%d and b=%d",a,b);
    return 0;
}
