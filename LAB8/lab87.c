/*A program to concatenate two strings.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[15],b[15];
    printf("Enter your first name: ");
    scanf("%s",&a);
     printf("Enter your last name: ");
    scanf("%s",&b);
    strcat(a,b);
    printf("Your name is %s.",a);
    return 0;
}





