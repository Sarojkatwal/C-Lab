#include <Stdio.h>
#include <conio.h>
int main()
{
    struct company
    {
    char name[30];
    char address[30];
    double phone;
    int noOfEmployee;
    }c;
    printf("Enter the name of company: ");
    scanf(" %[^\n]",c.name);
    printf("Enter the address of company: ");
    scanf(" %[^\n]",c.address);
    printf("Enter the phone number of company: ");
    scanf("%lf",&c.phone);
    printf("Enteer the number of the employee: ");
    scanf("%d",&c.noOfEmployee);
    printf("The information about company is:\n");
    printf("Name=%s\nAddress=%s\nPhone no=%.0lf\nNo of Employee=%d",c.name,c.address,c.phone,c.noOfEmployee);
    return 0;
}
