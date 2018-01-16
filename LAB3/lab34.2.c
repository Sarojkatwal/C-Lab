/*A C program to show the difference between gets() and scanf().*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char name[15];
    printf("Enter your full name: ");
    gets(name);
     printf("Your name is %s",name);
    printf("\n\nEnter your full name again: ");
    scanf("%s",&name);
    printf("Your name is %s",name);
    return 0;
}
