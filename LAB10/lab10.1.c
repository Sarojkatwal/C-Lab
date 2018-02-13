#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *a;
    char c;
    a=fopen("filec.txt","w");
    if(a==NULL)
    {
        printf("File cannot be created.");
        exit(1);
    }
    printf("Enter the set of characters.\nPress enter key to stop.\n");
    fflush(stdin);
    while((c=getchar())!='\n')
    {
        fputc(c,a);
    }
    fclose(a);
    return 0;
}
