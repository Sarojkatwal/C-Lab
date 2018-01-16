/*A C-program to input three integers and print them in forward and reverse order. */
#include <stdio.h>
int main()
{
   int a,b,c;
   printf("Enter the three integer values: ");
   scanf("%d%d%d",&a,&b,&c);
   printf("\nThe integers in forward order are %d,%d,%d.",a,b,c);
   printf("\nThe integers in reverse order are %d,%d,%d.",c,b,a);
    return 0;
}
