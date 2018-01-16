/*A program to check whether the string is palindrome or not.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char a[20];
    int l,i,p=1;
    printf("Enter a word:");
    gets(a);
    l=strlen(a);
     for(i=0;i<l/2;i++)
     {
       if(a[i]!=a[l-i-1])
        p=0;
     }
     if(p==0)
        printf("\nThe input string is not palindrome.");
     else
         printf("\nThe input string is palindrome.");
    return 0;
}

