/*Project.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
#include<windows.h>
int o=0,n;
int readElements(char [],int [],int,int[],int *);
void delete(char [],char b[],int ,int [],int );
gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
    char an[20];
    printf("Enter your password:");
    gets(an);
    if(strcmp(an,"sabin")==0)
    {
    system("cls");
    gotoxy(50,0);
    printf("-----------WELCOME------------\nloading...\n");
    for(n=0;n<60;n++)
    {
    fflush(stdin);
    printf("%c",178);
    for(o=0;o<10000000;o++)
    {

    }
    }
    o=0;
    system("cls");
    char y='y';
    do
    {
    char a[40],b[40],c[40]="loves";
    int d[20],e[15];
    int i,j,l,k,q,u;
    display(40,0,50,4);
    gotoxy(55,2);
    printf("\n\n\n");
    printf("Love Calculator");
    gotoxy(90,4);
    printf("\n");
    printf("Enter first name:\n");
    scanf(" %s",a);
    printf("Enter second name:\n");
    scanf("%s",b);
    strcat(a,c);
    strcat(a,b);
    goto z;
    z:
    l=strlen(a);
    if(l>0)
    {
     j=readElements(a,e,l,d,&q);
    delete(a,b,l,d,j);
    goto z;
    }
    while(q>2)
    {

        calc(&q,e);

    }
    u=10*e[0]+e[1];
    printf("\nLove percentage=%d%c\n\n",u,'%');
    getch();
    system("cls");
    printf("Enter y to continue:");
    y=getch();
    printf("\n");
    system("cls");
    o=0;
    }while(y=='y');
    printf("%60s-----------Thanks for visiting------------\n\n\n"," ");
    for(n=0;n<1000000000;n++)
    {

    }
    system("cls");
    }
    else
    {
        printf("\nIncorrect Password!!!");
    }
    return 0;
    }
int readElements(char a[],int e[],int l,int d[20],int *q)
{
  int i,m;
   int j=0;
  char b[30];
  for(i=0;i<l;i++)
  {
    if(a[i]==a[0])
    {
      j=j+1;
      d[j-1]=i;
    }
  }
  e[o]=j;
  ++o;
  *q=o;
  return j;
}
void delete(char a[40],char b[40],int l,int d[],int j)
{
 int i,y,s;
     i=0,y=0;
     do
     {
     for(s=0;s<j;s++)
     {
      if(y==(d[s]))
      {
          y++;
      }
     }
      b[i]=a[y];
      i++;
      y++;
     }while(i<l);
     b[i]='\0';
     strcpy(a,b);
}
int calc(int *q,int e[])
{
    int i,k=0,r,p;int f[30];
    if(*q%2!=0)
   {
    for(i=0;i<*q/2;i++)
    {
        f[i]=e[i]+e[*q-1-i];
        if(f[i]>9)
        {
           k=(10*10*k+f[i]);
        }
          else
          {
            k=(10*k+f[i]);
          }
    }
    f[i]=e[i];
    k=10*k+f[i];
    i=0;
    p=k;
    *q=0;
    while(p>0)
    {
        p=p/10;
        *q=*q+1;
    }
    while(k>0)
    {
        r=k%10;
        k=k/10;
        e[*q-1-i]=r;
        i=i+1;
    }
 }
else
 {
   for(i=0;i<*q/2;i++)
    {
        f[i]=e[i]+e[*q-1-i];
        {
         if(f[i]>9)
        {
           k=(10*10*k+f[i]);
        }
          else
          {
            k=(10*k+f[i]);
          }
         }
      }
    i=0;
    p=k;
    *q=0;
    while(p>0)
    {
        p=p/10;
        *q=*q+1;
    }
    while(k>0)
    {
        r=k%10;
        k=k/10;
        e[*q-1-i]=r;
        i=i+1;
    }

}
 }
  void display(int m,int n,int l,int b)
{
    int i,j;
    system("color AB");
    for(j=n;j<=n+b;j++)
    {
        for(i=m;i<=m+l;i++)
        {
            if(j==n||j==n+b||i==m||i==m+l)
            {
                gotoxy(i,j);
                printf("%c",254);
            }
        }
    }
    system("color A4");
 }


