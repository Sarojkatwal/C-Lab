/*A C program to show the difference between printf() and puts().*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char name[15];
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Your name is %s",name);
    puts("\n\nEnter your name: ");
    scanf("%s",name);
    puts("Your name is ");
    puts(name);
    return 0;
}
