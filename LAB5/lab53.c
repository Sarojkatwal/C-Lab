/*A Proram to display Fibonacci series.*/
#include <stdio.h>
#include <conio.h>
int main()
{
   int i=0,j=0,a=0,b=1;
    printf("The Fibonacci series is: \n");
    do
    {
     if(i==0 || i==1)
        {
          printf("%d\t",i);
        }
     else
       {
        j=a+b;
        printf("%d\t",j);
        a=b;
        b=j;
       }
       i++;
   }while((a+b)<300);
    return 0;
}





