  /*A Proram to find permutation and combination.*/
#include <stdio.h>
#include <conio.h>
long fact(int n)
{
   if(n==1 || n==0)
        return 1;
    else
        return n*(fact(n-1));
}

int main()
{
    long f1,f2,f3;
   int n,r,p,c;
   printf("Enter the value of n and r: ");
  scanf("%d%d",&n,&r);
  f1=fact(n);
  f2=fact(r);
  f3=fact(n-r);
  p=f1/f3;
  c=f1/(f2*f3);
  printf("\nThe permutation is %d.",p);
  printf("\nThe combination is %d.",c);
   return 0;
}

