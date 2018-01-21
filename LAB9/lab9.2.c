#include <Stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    float l;
    printf("X1=");
    scanf("%d",&a);
    printf("Y1=");
    scanf("%d",&c);
    printf("X2=");
    scanf("%d",&b);
    printf("Y2=");
    scanf("%d",&d);
    l=sqrt(pow((a-b),2)+pow((c-d),2));
    printf("\nThe distance between two points is %.3f",l);
    return 0;
}
