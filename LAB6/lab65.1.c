/*A Proram to generate fibonacci series.*/
#include <stdio.h>
#include <conio.h>
void example();
int main()
{
 example();
 example();
 example();
  return 0;
}
void example()
{
    static int a=10;
    printf("The value of static variable a is %d.\n",a);
    a=a+10;
}
