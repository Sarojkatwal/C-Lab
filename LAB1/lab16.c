/*A C-program to calculate simple iterest.*/
#include <stdio.h>
int main()
{
  int P,T;
  float R,I;


  P=4000;
  T=2;
  R=5.5;
  I=P*T*R/100;
  printf("The simple interest for a sum is Rs.%.2f",I);
    return 0;
}
