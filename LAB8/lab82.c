/*A program to find sum of all elements of array using pointer.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[6]={1,2,3,4,5,6},i,sum=0;
    for(i=0;i<6;i++)
    {
      sum+=*(a+i);
    }
    printf("The sum is %d",sum);
    return 0;
}


