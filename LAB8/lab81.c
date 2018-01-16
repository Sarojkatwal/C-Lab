/*A program to find largest number using pointer.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3],max,i;
    printf("Enter three numbers:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",(a+i));
    }
    max=*(a+0);
     for(i=0;i<3;i++)
    {
        if(max<*(a+i))
        {
            max=*(a+i);
        }
    }
    printf("\nThe largest number is %d",max);
    return 0;
}

