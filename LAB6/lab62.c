/*A Proram to find sum of first 50 natural numbers using recursive function.*/
#include <stdio.h>
#include <conio.h>
int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}

int main()
{
  printf("The sum of first 50 natural numbers is %d.",sum(50));
   return 0;
}

