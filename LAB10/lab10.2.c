#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *a;
    char c;
    int i=0;
    a=fopen("filec.txt","r");
    if(a==NULL)
    {
        printf("File cannot be opened.");
        exit(1);
    }
    printf("The characters from file are:\n");
    fflush(stdin);
    while((c=fgetc(a))!=EOF)
    {
       putchar(c);
       i++;
    }
    printf("\nThe number of characters are %d.",i);
    fclose(a);
    getch();
    return 0;
}
