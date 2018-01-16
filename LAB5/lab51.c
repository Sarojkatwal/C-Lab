/*A Proram to iput two numbers and find the sum of even numbers.*/
#include <stdio.h>
#include <conio.h>
int main()
{
   int a,b,c=0,i;
    printf("Enter two numbers a and b (a<b): ");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        if(i%2==0)
        {
            c+=i;
        }
    }
    printf("\nThe sum of even numbers is %d",c);
    return 0;
}



