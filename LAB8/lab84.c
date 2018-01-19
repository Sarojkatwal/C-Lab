/*A program to count number of words and character in the sentence.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[50];
    int l,i,null=1;
    printf("Write a sentence: \n");
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
      if(a[i]==' ')
      {
        if((a[i+1]<='z'&&a[i+1]>='a')|| (a[i+1]<='z'&&a[i+1]>='a'))
           null++;
      }
    }
    printf("\nThe number of words=%d",null);
    printf("\nThe number of character=%d",l);
    return 0;
}
