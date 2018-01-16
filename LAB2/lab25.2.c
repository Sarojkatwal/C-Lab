/*A c progrm to display whether the number is even or odd by using bitwise operator.*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if((a&1)==0)
        printf("The number is even.");
    else
        printf("The number is odd.");
    return 0;
}
