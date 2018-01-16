/*A C program to display the given format.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int x=6,y=3;
    printf("\tx\t\ty\t\texpression\t\tresult");
    printf("\n\t%d\t|\t%d\t|\t x=y+3\t\t|\tx=%d",x,y,y+3);
    printf("\n\t%d\t|\t%d\t|\t x=y-2\t\t|\tx=%d",x,y,y-2);
    printf("\n\t%d\t|\t%d\t|\t x=y*5\t\t|\tx=%d",x,y,y*5);
    printf("\n\t%d\t|\t%d\t|\t x=x/y\t\t|\tx=%d",x,y,x/y);
    printf("\n\t%d\t|\t%d\t|\t x=x%sy\t\t|\tx=%d",x,y,"%",x%y);
    return 0;
}
