/*A program to display the given output.*/
#include <stdio.h>
#include <conio.h>
int main()
{
  float x=3.0,y=12.5,z=523.3,A=300.0,B=1200.5,C=5300.3;
printf("x\ty\tz=%10.1f|%10.1f|%10.1f|",x,y,z);
  printf("\nA\tB\tC=%10.1f|%10.1f|%10.1f|",A,B,C);
  printf("\n-----------------------------------------------------------");
  printf("\nx\ty\tz=\t|%-10.2f|%-10.2f|%-10.2f",x,y,z);
  printf("\nA\tB\tC=\t|%-10.2f|%-10.2f|%-10.2f",A,B,C);
  return 0;
}
