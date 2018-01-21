 #include <Stdio.h>
#include <conio.h>
typedef struct
    {
    float re;
    float im;
    }complex;
complex add(complex a,complex b)
{
    complex c;
    c.re=a.re+b.re;
    c.im=a.im+b.im;
    return c;
}
complex sub(complex a,complex b)
{
    complex c;
    c.re=a.re-b.re;
    c.im=a.im-b.im;
    return c;
}
int main()
{
    complex b,d,e,f;
    printf("Enter 1st complex number a+bi:");
    scanf("%f+%fi",&b.re,&b.im);
    printf("Enter 2nd complex number a+bi:");
    scanf("%f+%fi",&d.re,&d.im);
    e=add(b,d);
    printf("\nThe sum of two complex numbers is :\n");
    printf("%.2f+%.2fi\n",e.re,e.im);
     f=sub(b,d);
     printf("\The difference of two complex numbers is :\n");
    printf("%.2f+%.2fi",f.re,f.im);
    return 0;
}

