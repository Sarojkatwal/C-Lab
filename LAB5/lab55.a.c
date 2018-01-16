/*A Proram to print given patern.*/
#include <stdio.h>
#include <conio.h>
int main()
{
   int i,j;
   for(i=1;i<=4;i++)
   {
    for(j=1;j<=15;j++)
      {

       if(j==4-i||j==3+i||j==12-i||j==11+i)
           {
           printf("*  ");
           }
       else
           {
               printf("   ");
           }
       }
       printf("\n");
   }
   return 0;
}
