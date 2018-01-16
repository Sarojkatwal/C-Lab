/*A program to compare two string.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[15],b[15];
    int diff;
    printf("Enter first string: ");
    scanf("%s",&a);
     printf("Enter second string: ");
    scanf("%s",&b);
    diff=strcmp(a,b);
    if(diff>0)
        printf("%s is greater than %s.",a,b);
    else if(diff<0)
        printf("%s is greater than %s.",b,a);
     else
        printf("%s is equal to %s.",a,b);
    return 0;
}





