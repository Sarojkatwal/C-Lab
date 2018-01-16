
/*A c progrm to display whether the number is even or odd by using conditional operator.*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    a%2==0?printf("The number is even."):printf("The number is odd.");
    return 0;
}
