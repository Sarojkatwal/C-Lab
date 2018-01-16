/*program to initialize one dimensional array and find sum and average.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[8]={1,2,3,4,5,6,7,8},sum=0,i;
    float avg;
    for(i=0;i<8;i++)
    {
      sum+=a[i];
    }
   avg=sum/8;
   printf("The sum is %d",sum);
   printf("\nThe average is %.2f",avg);
    return 0;
}
