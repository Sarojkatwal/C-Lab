/*A program to delete white spaces and replace '.' by ';'.*/
#include <stdio.h>

int main()
{
    char a[100],b[100];
    int c=0,d=0;
    printf("Enter a sentence:\n");
    gets(a);
    while(a[c]!='\0')
    {
       while(a[c]==' ')
        {
            c++;
        }
       if(a[c]=='.')
       {
           a[c]=':';
       }
       b[d]=a[c];
       d++;
       c++;
    }
    b[d]='\0';
    printf("The sentence after correction is:\n");
    printf("%s",b);
    return 0;
}






