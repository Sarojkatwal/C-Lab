/*A Proram to reverse a number.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a,i,j=0;
    printf("Enter an number of two or higher digits: ");
    scanf("%d",&a);
    printf("\nThe reversed number is: ");
    while(a)
    {
     i=a%10;
     a=a/10;
     j=10*j+i;
    }
     printf("%d",j);
    return 0;
}

