#include <Stdio.h>
#include <conio.h>
struct company
    {
    char name[30];
    char address[30];
    double phone;
    int noOfEmployee;
    };
void read(struct company *c)
{
    printf("Enter the name of company: ");
    scanf("%[^\n]",c->name);
    printf("Enter the address of company: ");
    scanf(" %[^\n]",c->address);
    printf("Enter the phone no of company: ");
    scanf("%lf",&c->phone);
    printf("Enteer the number of the employee: ");
    scanf("%d",&c->noOfEmployee);
}
void display(struct company *c)
{
    printf("The information about company is:\n");
    printf("Name=%s\nAddress=%s\nPhone no=%.0lf\nno of Employee:%d",c->name,c->address,c->phone,c->noOfEmployee);
}
int main()
{
  struct company c;
  read(&c);
  display(&c);
  return 0;
}
