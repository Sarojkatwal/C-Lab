/*A C-program to swap two variables value without using third variable.*/
#include <stdio.h>
int main()
{
 int a,b;
 printf("Enter the two numbers a and b :");
 scanf("%d%d",&a,&b);
 printf("\nBefore swapping a=%d and b=%d",a,b);
 a=b+a;
 b=a-b;
 a=a-b;
 printf("\nAfter swapping a=%d and b=%d",a,b);
    return 0;
}
