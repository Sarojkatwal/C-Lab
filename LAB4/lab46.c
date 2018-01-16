/*A Proram to find the roots of the quadratic equation.*/
#include <stdio.h>
#include <conio.h
#include<math.h>
int main()
{
   float a,b,c,r1,r2,d;
    printf("Enter cofficients a,b,c of ax^2+bx+c=0: ");
    scanf("%f%f%f",&a,&b,&c);
  d=b*b-4*a*c;
  if(d>=0)
  {
  r1=(-b+sqrt(d))/(2*a);
  r2=(-b-sqrt(d))/(2*a);
  printf("\nRoot1=%.2f\tRoot2=%.2f",r1,r2);
  else
  {
      printf("\nRoot1=%.2f+%.2fi",-b/(2*a),sqrt(-d)/(2*a));
      printf("\nRoot2=%.2f-%.2fi",-b/(2*a),sqrt(-d)/(2*a));
  }
  return 0;

}



