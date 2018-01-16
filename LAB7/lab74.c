/*A program to read and add and display two matrices of order 3*2.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][2],b[3][2],c[3][2],i,j;
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
        printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter tthe elements of second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
        printf("b[%d][%d]=",i,j);
        scanf("%d",&b[i][j]);
        }
    }
   for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
        c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nThe resultant matrix after addition is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
        printf("\t%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
