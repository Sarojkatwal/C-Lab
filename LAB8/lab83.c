/*A program to swap the value of variable using pointer.*/
#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
    int z;
    z=*a;
    *a=*b;
    *b=z;
}
int main()
{
    int a,b;
   printf("Enter the first number:");
   scanf("%d",&a);
   printf("Enter the second number:");
   scanf("%d",&b);
   printf("\nAfter swap:\n");
   swap(&a,&b);
    printf("First number: %d",a);
   printf("\nSecond number: %d",b);
    return 0;
}



