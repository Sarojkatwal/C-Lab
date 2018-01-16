/*A C program showing difference between getch(),getche() and getchar().*/
#include <stdio.h>
int main()
{
    char a;
    printf("Enter a letter:");
    a=getchar();
    printf("The entered letter is %c",a);
     printf("\n\nEnter a letter:");
    a=getch();
    printf("\nThe entered letter is %c",a);
    printf("\n\nEnter a letter:");
    a=getche();
    printf("\nThe entered letter is %c",a);
    return 0;
}
