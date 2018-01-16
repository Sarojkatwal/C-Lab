/*A program to find largest and smallest among three entered numbers and
 display whether they are even or odd. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,l,s;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    s=a;
    else if(b<a && b<c)
       s=b;
    else
        s=c;
    if(a>b && a>c)
       l=a;
    else if(b>a && b>c)
       l=b;
    else
        l=c;
    printf("\nThe largest number is %d",l);
    printf("\nThe smallest number is %d",s);
    if(l%2==0)
         printf("\nThe largest number is even.");
    else
         printf("\nThe largest number is odd.");
    if(s%2==0)
     printf("\nThe smallest number is even.");
     else
        printf("\nThe smallest number is odd.");
    return 0;
}
