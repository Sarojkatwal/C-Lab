/*A program to sort 5 string words stored in an array of pointer.*/
#include <stdio.h>
#include<conio.h>
int main()
{
    char *a[5]={"Ram","Shyam","Sita","Ganesh","Bishnu"};
    int i;
    printf("The entered string words are:\n");
     for(i=0;i<5;i++)
    {
        printf("%s\t",*(a+i));
    }
    return 0;
}






