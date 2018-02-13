#include <Stdio.h>
#include <conio.h>
struct company
    {
    char name[30];
    char address[30];
    double phone;
    int noOfEmployee;
    };
    struct company read(struct company a)
 {
    printf("Enter the name of company: ");
    scanf(" %[^\n]",a.name);
    printf("Enter the address of company: ");
    scanf(" %[^\n]",a.address);
    printf("Enter the phone no of company: ");
    scanf("%lf",&a.phone);
    printf("Enteer the number of the employee: ");
    scanf("%d",&a.noOfEmployee);
    return a;
 }
int main()
{
    struct company c,a;
    a=read(c);
    printf("\nThe information about company is:\n\n");
    printf("Name=%s\nAddress=%s\nPhone no=%.0lf\nNo of Employee=%d",a.name,a.address,a.phone,a.noOfEmployee);
    return 0;
}
