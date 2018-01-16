/*Print the value of y for x=2 &z=4*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int x=2,y,z=4;
    y=x++ + ++x;
    printf("\ty=%d",y);
     y=++x + ++x;
    printf("\ty=%d",y);
     y=++x + ++x + ++x;
    printf("\ty=%d",y);
     y=x>z;
    printf("\ty=%d",y);
     y=x>z?x:z;
    printf("\ty=%d",y);
     y=x&z;
    printf("\ty=%d",y);
     y=x>>2 + z<<1;
    printf("\ty=%d",y);
    return 0;

}
