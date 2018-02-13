 #include <Stdio.h>
#include <conio.h>
typedef union family
{
    char surname[50];
    int num;
    float salary;
}fam;
enum week{sun,mon,tue,wed,thu,fri,sat};
int main()
{
    fam A;
    printf("Enter the surname and salary of the family:");
    scanf("%s  %d   %f",A.surname,A.num,A.salary);
    printf("Family surname is %s.\n",A.surname);
    enum week today;
    today=fri;
    printf("Day %d .",today+1);
    return 0;
}

