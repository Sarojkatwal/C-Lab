/*A Proram to find HCF and LCM of the two numbers.*/
#include <stdio.h>
#include <conio.h>
int main()
{
   int a,b,HCF,LCM,i;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    for(i=a;i>=1;i--)
    {
        if (a%i==0 && b%i==0)
        {
            HCF=i;
            break;
        }
    }
    LCM=a*b/HCF;
    printf("\nThe HCF is %d",HCF);
    printf("\nThe LCM is %d",LCM);
    return 0;
}




