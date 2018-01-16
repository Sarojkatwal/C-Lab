/*A program to multiply two 3*3 matrix.*/
#include<stdio.h>
#include<conio.h>
int read(int z[3][3])
{
int i,j;
 for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&z[i][j]);
        }
    }
}
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    printf("Enter the elements of first matrix:\n");
    read(a);
    printf("\nEnter  the elements of second matrix:\n");
    read(b);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        for(k=0;k<3;k++)
        {
       sum+=a[i][k]*b[k][j];
        }
         c[i][j]=sum;
         sum=0;
        }
    }
    printf("\nThe resultant matrix after multiplication is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("\t%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
