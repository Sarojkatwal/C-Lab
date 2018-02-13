#include <Stdio.h>
#include <conio.h>
struct student
    {
    char name[30];
    char address[30];
    int roll;
    int age;
    float marks;
    };
    void read(struct student a[12])
 {
     int i;
    for(i=0;i<12;i++)
    {
    printf("Student %d\n",i+1);
    printf("Name: ");
    scanf(" %[^\n]",(a[i].name));
    printf("Address: ");
    scanf(" %[^\n]",a[i].address);
    printf("Roll no: ");
    scanf("%d",&a[i].roll);
    printf("Age: ");
    scanf("%d",&a[i].age);
    printf("Avg Marks: ");
    scanf("%f",&a[i].marks);
    printf("\n");
    }
  }
 void display(struct student c[12])
 {
     int i;
   printf("%-25s%-25s%-8s%-9s%-8s\n","Name","Address","Roll no","Age","Marks");
for(i=0;i<12;i++)
{
    printf("%-25s%-25s%-8d%-9d%-8.2f",c[i].name,c[i].address,c[i].roll,c[i].age,c[i].marks);
    printf("\n");
}
 }
int main()
{
    struct student b[12];
    read(b);
    printf("The information about students is:\n\n");
    display(b);
    return 0;
}
