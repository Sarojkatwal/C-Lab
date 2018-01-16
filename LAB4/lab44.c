/*A Proram to check if a number is divisible by certain  numbers.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
   if(a%5==0)
    printf("%d is multiple of 5.",a);
   else
    printf("\n%d is not multiple of 5.",a);
   if(a%7==0 && a%11!=0)
    printf("\n%d is divisible by 7 but not by 11.",a);
    return 0;
}


