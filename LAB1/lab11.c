#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        if(i==5)
        {
           break;
        }
    }
    printf("Hello World!");
    getch();
    return 0;
}
