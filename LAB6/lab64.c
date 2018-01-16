/*A Proram to generate fibonacci series.*/
#include <stdio.h>
#include <conio.h>
long fib(int n)
{
   if(n==1 || n==2)
        return n-1;

    else
        return fib(n-2)+fib(n-1);
}
int main()
{
   int n,i;
   printf("Enter the value of n : ");
  scanf("%d",&n);
  printf("\nThe %d terms of fibonacci series are:\n",n);
  for(i=1;i<=n;i++)
    printf("%d ",fib(i));
   return 0;
}

