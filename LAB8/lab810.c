/*A program to print given pattern.*/
#include<stdio.h>
#include<conio.h>

int main()
{
    char a[]="UNIVERSITY";
    int i,j,k=0;
  for(i=0;i<9;i++)
  {
      i<5?k++:k--;
      for(j=0;j<2*k;j++)
      {
          printf("%c",a[j]);
      }
      printf("\n");
  }
    return 0;
}




