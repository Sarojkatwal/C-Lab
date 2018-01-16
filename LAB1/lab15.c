/*A C-program to calculate area of ellipse.*/
#include <stdio.h>
#define PI 3.142
int main()
{
  int minor,major;
  float area;
  minor=4;
  major=6;
  area=PI*major*minor;
  printf("The area of ellipse is :%f",area);
    return 0;
}
