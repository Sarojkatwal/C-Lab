#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    FILE *a;
    char c[5][40],z;
    int i=0;
    a=fopen("string.txt","w+");
    if(a==NULL)
    {
        printf("File cannot be created.");
        exit(1);
    }
    printf("The characters from file are:\n");
    printf("Enter the set of strings.Press enter at the begining to stop writing.\n");
    fflush(stdin);
    for(i=0;i<5;i++)
    {
        gets(c+i);
        fputs(c+i,a);
    }
   printf("The set of the strings from the file is:\n");
   rewind(a);
   fflush(stdin);
for(i=0;i<5;i++)
    {
        fgets(c,40,a);
       puts(c);
    }
    fclose(a);
    return 0;
}
