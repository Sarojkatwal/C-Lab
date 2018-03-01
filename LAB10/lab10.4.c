#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *a;
    char name[20],n[20];
    float height,h;
    int i=0,age,ag;
    a=fopen("ccc.txt","w+");
    if(a==NULL)
    {
        printf("File cannot be created.");
        exit(1);
    }
    printf("Enter name,age and height:");
    scanf("%s%d%f",&name,&age,&height);
    fprintf(a,"%s\t%d\t%f",name,age,height);
    printf("Reading from the file");
    rewind(a);
    fscanf(a,"%s%d%f",&n,&ag,&h);
    printf("\nName:%s\nAge=%d\nHeight=%.2f",n,ag,h);
    fclose(a);
    getch();
    return 0;
}
