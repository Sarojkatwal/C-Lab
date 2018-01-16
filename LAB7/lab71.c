#include<stdio.h>
#include<conio.h>
int main()
{
    float a[10];
    int i;
    printf("Enter ten floating numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }
    printf("\nYou have entered these 10 numbers:\n");
     for(i=0;i<10;i++)
    {
        printf("a[%d]=%.3f\t",i,a[i]);
    }
    return 0;
}
