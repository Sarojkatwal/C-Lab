/*Use of macros(preprocessor)*/
#include <stdio.h>
#include<conio.h>
#define PI 3.1415
#define mult(a,b) a*b
#define sum(a,b) a+b
#define sub(a,b) a-b
#define div(a,b) a/b
int main()
{
    int a=8,b=4;
    float c;
    c=PI*(mult(a,b));
    printf("c=%.2f",c);
     c=PI*(sum(a,b));
    printf("\nc=%.2f",c);
     c=PI*(sub(a,b));
    printf("\nc=%.2f",c);
     c=PI*(div(a,b));
    printf("\nc=%.2f",c);
    return 0;

}

