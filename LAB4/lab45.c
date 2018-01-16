/*A Proram to check if a year is leap year or not.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter a year: ");
    scanf("%d",&a);
   if((a%4==0 && a%100!=0)||a%400==0)
    printf("%d is leap year.",a);
   else
    printf("\n%d is not leap year.",a);
    return 0;
}



