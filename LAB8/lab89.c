/*A program to sort 5 string words stored in an array of pointer.*/
#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
    char *a[5]={"Ram","Shyam","Sita","Ganesh","Bishnu"};
    int i,j;
    char z[10];
    printf("The stored string in alphabetical order are:\n");
    for(i=0;i<4;i++)
     {
         for(j=i+1;j<5;j++)
         {
           if(strcmp(a[i],a[j])>0)
           {
               strcpy(z,&a[j]);
               strcpy(&a[j],&a[i]);
               strcpy(&a[i],z);

           }
         }
     }
     for(i=0;i<5;i++)
     {
         printf("%s\t",*(a+i));
     }
    return 0;
}






