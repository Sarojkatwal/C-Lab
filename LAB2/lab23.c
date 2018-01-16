/*A C program to calculate simple and compound interest.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int t,p;
   float SI,CI,r;
   printf("Enter principal: ");
   scanf("%d",&p);
   printf("\nEnter time: ");
   scanf("%d",&t);
   printf("\nEnter rate of interest: ");
   scanf("%f",&r);
   SI=p*t*r/100;
   CI=p*(pow((1+r/100),t)-1);
   printf("\nThe simple interest for a sum is %.2f",SI);
   printf("\nThe compound interest for a sum is %.2f",CI);
    return 0;
}

