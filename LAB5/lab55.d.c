/*A Proram to print given patern.*/
#include <stdio.h>
#include <conio.h>
int main()
{
   int i,j,k,l;
   for(i=1;i<=5;i++)
   {
       k=5;
       l=i;
    for(j=1;j<=(6-i);j++)
       {
           printf("%d\t",l);
           l=l+k;
           k--;
       }
       printf("\n");
   }
   return 0;
}
