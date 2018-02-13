#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    FILE *a;
    char c[40],z;
    int i=0;
    a=fopen("aaaa.txt","w+");
    if(a==NULL)
    {
        printf("File cannot be created.");
        exit(1);
    }
    printf("The characters from file are:\n");
    printf("Enter the set of strings.Press enter at the begining to stop writing.\n");
    fflush(stdin);
    while(strlen(gets(c))!=0)
    {
       fputs(c,a);
       fputs("\n",a);
    }
   printf("The set of the strings from the file is:\n");
   rewind(a);
   while((z=fgetc(a))!=EOF)
   {
       putchar(z);
   }
    fclose(a);
    return 0;
}
