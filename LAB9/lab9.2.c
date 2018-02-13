#include <stdio.h>
#include <math.h>
int main()
{
    int X,Y;
    float d;
    struct coordinate
    {
        int x,y;
    }A,B;
   printf("Enter the coordinate of the first point in the form (x,y):");
   scanf("(%d,%d)",&A.x,&A.y);
    printf("Enter the coordinate of the second point in the form (x,y):");
   scanf(" (%d,%d)",&B.x,&B.y);
   X=pow((B.x-A.x),2);
   Y=pow((B.y-A.y),2);
   d=sqrt(X+Y);
    printf("\nThe distance between two points is %.3f",d);
    return 0;
}
