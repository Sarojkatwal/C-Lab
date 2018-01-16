/*A program to find largest and smallest number.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float a[10],min,max;
    int i;
    printf("Enter ten floating numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }
    min=a[0];
    max=a[0];
     for(i=0;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
          min=a[i];
        }
    }
    printf("\nThe largest number is %.3f",max);
     printf("\nThe smallest number is %.3f",min);
    return 0;
}
